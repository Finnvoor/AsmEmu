//
//  TSParser.swift
//  
//
//  Created by Finn Voorhees on 10/01/2021.
//

import Foundation
import tree_sitter

public class TSParser {
    private let pointer = ts_parser_new()
    
    public init() {}
    
    deinit {
        ts_parser_delete(self.pointer)
    }
    
    var language: TSLanguage? {
        if let pointer = ts_parser_language(self.pointer) {
            return TSLanguage(pointer)
        } else { return nil }
    }
    
    public func setLanguage(to language: TSLanguage) {
        let languageVersion = language.version
        guard languageVersion <= TREE_SITTER_LANGUAGE_VERSION && languageVersion >= TREE_SITTER_MIN_COMPATIBLE_LANGUAGE_VERSION else {
            return
        }
        
        guard ts_parser_set_language(self.pointer, language.pointer) else {
            return
        }
    }
    
    public func parse(_ string: String) -> TSTree? {
        if let tree = ts_parser_parse_string(self.pointer, nil, string, UInt32(string.utf8.count)) {
            return TSTree(pointer: tree)
        } else {
            return nil }
    }
}

//
//  TSLanguage.swift
//  
//
//  Created by Finn Voorhees on 14/01/2021.
//

import tree_sitter

public class TSLanguage {
    let pointer: UnsafePointer<tree_sitter.TSLanguage>
    
    public var version: UInt32 {
        return ts_language_version(self.pointer)
    }
    
    public init(_ pointer: UnsafePointer<tree_sitter.TSLanguage>) {
        self.pointer = pointer
    }
}

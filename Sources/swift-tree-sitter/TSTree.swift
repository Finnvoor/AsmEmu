//
//  TSTree.swift
//  
//
//  Created by Finn Voorhees on 11/01/2021.
//

import tree_sitter

public class TSTree {
    private let pointer: OpaquePointer
    
    public var rootNode: TSNode? { return TSNode(node: ts_tree_root_node(self.pointer)) }
    public var sExpression: String { return self.rootNode?.sExpression ?? "" }
    
    public lazy var cursor: TSTreeCursor? = {
        guard let rootNode = self.rootNode else { return nil }
        return TSTreeCursor(ts_tree_cursor_new(rootNode.node))
    }()
    
    public init(pointer: OpaquePointer) {
        self.pointer = pointer
    }
    
    deinit {
        ts_tree_delete(self.pointer)
    }
}

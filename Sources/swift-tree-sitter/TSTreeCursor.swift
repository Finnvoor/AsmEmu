//
//  TSTreeCursor.swift
//  
//
//  Created by Finn Voorhees on 14/01/2021.
//

import tree_sitter

public class TSTreeCursor {
    var cursor: tree_sitter.TSTreeCursor
    
    public var node: TSNode? { return TSNode(node: ts_tree_cursor_current_node(&self.cursor)) }
    
    init(_ cursor: tree_sitter.TSTreeCursor) {
        self.cursor = cursor
    }
    
    deinit {
        ts_tree_cursor_delete(&self.cursor)
    }
    
    public func reset(startingAt node: TSNode) {
        ts_tree_cursor_reset(&self.cursor, node.node)
    }
    
    @discardableResult public func goToFirstChild() -> Bool {
        return ts_tree_cursor_goto_first_child(&self.cursor)
    }
    
    @discardableResult public func goToParent() -> Bool {
        return ts_tree_cursor_goto_parent(&self.cursor)
    }
    
    @discardableResult public func goToNextSibling() -> Bool {
        return ts_tree_cursor_goto_next_sibling(&self.cursor)
    }
}

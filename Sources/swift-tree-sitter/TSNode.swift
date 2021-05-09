//
//  TSNode.swift
//  
//
//  Created by Finn Voorhees on 11/01/2021.
//

import tree_sitter

public class TSNode {
    let node: tree_sitter.TSNode
    
    public var sExpression: String { return String(cString: ts_node_string(self.node)) }
    private var kindID: UInt16 { return ts_node_symbol(self.node) }
    public var kind: String { return String(cString: ts_node_type(self.node)) }
    public var isNamed: Bool { return ts_node_is_named(self.node) }
    public var isError: Bool { return self.kindID == UInt16.max }
    public var startPoint: TSPoint { return TSPoint(ts_node_start_point(self.node)) }
    public var endPoint: TSPoint { return TSPoint(ts_node_end_point(self.node)) }
    public var childCount: UInt32 { return ts_node_child_count(self.node) }
    
    public func child(at index: Int) -> TSNode? {
        return TSNode(node: ts_node_child(self.node, UInt32(index)))
    }
    
    public func child(fieldName: String) -> TSNode? {
        return TSNode(node: ts_node_child_by_field_name(self.node, fieldName, UInt32(fieldName.count)))
    }
    
    public func getChildren(using cursor: TSTreeCursor) -> [TSNode] {
        cursor.reset(startingAt: self)
        cursor.goToFirstChild()
        return (0..<self.childCount).compactMap { _ in
            let child = cursor.node
            cursor.goToNextSibling()
            return child
        }
    }
    
    public init?(node: tree_sitter.TSNode) {
        if node.id == nil { return nil }
        self.node = node
    }
}

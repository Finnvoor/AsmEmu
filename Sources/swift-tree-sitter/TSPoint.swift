//
//  TSPoint.swift
//  
//
//  Created by Finn Voorhees on 14/01/2021.
//

import tree_sitter

public struct TSPoint: Comparable {
    private let point: tree_sitter.TSPoint
    
    public var row: UInt32 {
        return self.point.row
    }
    
    public var column: UInt32 {
        return self.point.column
    }
    
    public init(_ point: tree_sitter.TSPoint) {
        self.point = point
    }
    
    public static func < (lhs: TSPoint, rhs: TSPoint) -> Bool {
        return lhs.row < rhs.row || (lhs.row == rhs.row && lhs.column < rhs.column)
    }
    
    public static func == (lhs: TSPoint, rhs: TSPoint) -> Bool {
        return lhs.row == rhs.row && lhs.column == rhs.column
    }
}

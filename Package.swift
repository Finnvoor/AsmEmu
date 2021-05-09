// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "AsmEmu",
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "AsmEmu",
            targets: ["tinyasm", "swift-tinyarm"]),
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        // .package(url: /* package url */, from: "1.0.0"),
    ],
    targets: [
        .target(
            name: "tinyarm",
            dependencies: []),
        .target(
            name: "tinyasm",
            dependencies: ["swift-tree-sitter", "tree-sitter-ARMv7"]),
        .target(
            name: "tree-sitter",
            dependencies: [],
            exclude: [
                "src",
                "./src/unicode/ICU_SHA",
                "./src/unicode/LICENSE",
                "./src/unicode/README.md",
            ]),
        .target(
            name: "tree-sitter-ARMv7",
            dependencies: []),
        .target(
            name: "swift-tree-sitter",
            dependencies: ["tree-sitter"]),
        .target(
            name: "swift-tinyarm",
            dependencies: ["tinyarm"]),
        .testTarget(
            name: "AsmEmuTests",
            dependencies: ["swift-tinyarm", "tinyasm", "swift-tree-sitter", "tree-sitter-ARMv7"]),
    ]
)

// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterTestScript",
    products: [
        .library(name: "TreeSitterTestScript", targets: ["TreeSitterTestScript"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterTestScript",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterTestScriptTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterTestScript",
            ],
            path: "bindings/swift/TreeSitterTestScriptTests"
        )
    ],
    cLanguageStandard: .c11
)

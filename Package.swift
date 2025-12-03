// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "OkHi",
    products: [
        .library(
            name: "iOSOkHi",
            targets: ["iOSOkHi"]
        ),
    ],
    dependencies: [],
    targets: [
        .binaryTarget(
            name: "iOSOkHi",
            path: "./iOSOkHi.xcframework"
        )
    ]
)
// swift-tools-version:5.5
let package = Package(
    name: "OkHi",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "OkHi",
            targets: ["OkHi"])
    ],
    targets: [
        .binaryTarget(
            name: "OkHi",
            path: "OkHi.xcframework")
    ])
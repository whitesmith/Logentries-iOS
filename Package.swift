// swift-tools-version:5.1
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

let package = Package(
    name: "LogEntries",
    platforms: [
        .iOS(.v9)
    ],
    products: [
        .library(
            name: "LogEntries",
            targets: ["LogEntries"]
        )
    ],
    targets: [
        .target(
            name: "LogEntries",
            path: ".",
            sources: ["lelib"],
            publicHeadersPath: "include"
        )
    ]
)

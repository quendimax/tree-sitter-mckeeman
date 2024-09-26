import XCTest
import SwiftTreeSitter
import TreeSitterMckeeman

final class TreeSitterMckeemanTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_mckeeman())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Mckeeman grammar")
    }
}

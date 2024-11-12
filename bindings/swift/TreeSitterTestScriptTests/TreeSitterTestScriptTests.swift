import XCTest
import SwiftTreeSitter
import TreeSitterTestScript

final class TreeSitterTestScriptTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_test_script())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading TestScript grammar")
    }
}

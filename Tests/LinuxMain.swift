import XCTest

import AsmEmuTests

var tests = [XCTestCaseEntry]()
tests += AsmEmuTests.allTests()
XCTMain(tests)

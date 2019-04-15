#include "TestSuite.h"

TestSuite::TestSuite() {
}

void TestSuite::runTest() {
    std::cout << "\n|===============|\n";
    std::cout << "  RUNNING TESTS \n";
    std::cout << "|===============|\n";

    test1();
}

void TestSuite::test1() {
    LinkedListOfInts testList;
	bool hasPassed = false;

	std::cout << "TEST: Size of empty list is zero\n"; 

	hasPassed = testList.size() == 0;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}


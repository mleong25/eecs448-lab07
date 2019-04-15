#include "TestSuite.h"

TestSuite::TestSuite() {
}

void TestSuite::runTest() {
    std::cout << "\n|===============|\n";
    std::cout << "  RUNNING TESTS \n";
    std::cout << "|===============|\n";

    test1();
    test2();
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

void TestSuite::test2() {
    LinkedListOfInts testList;
	bool hasPassed = false;

    testList.addBack(0);
	std::cout << "TEST: Size of list on addBack()\n"; 

	hasPassed = testList.size() == 1;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}

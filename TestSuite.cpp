#include "TestSuite.h"

TestSuite::TestSuite() {
}

void TestSuite::runTest() {
    std::cout << "\n|===============|\n";
    std::cout << " RUNNING TESTS \n";
    std::cout << "|===============|\n";

    test1();
}

void TestSuite::test1() {
    LinkedListOfInts<int> testList;
	bool hasPassed = false;

	std::cout << "TEST: size of empty list is zero\n"; 

	isPassed = testList.size() == 0;
	printPassFail(isPassed);
}

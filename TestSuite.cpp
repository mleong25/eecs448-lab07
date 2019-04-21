#include "TestSuite.h"

TestSuite::TestSuite() {
}

void TestSuite::runTest() {
    std::cout << "\n|===============|\n";
    std::cout << "  RUNNING TESTS \n";
    std::cout << "|===============|\n";

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
}

void TestSuite::test1() {
    LinkedListOfInts testList;
	bool hasPassed = false;

	std::cout << "TEST 1: Size of empty list is zero\n"; 

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
	std::cout << "TEST 2: Size of list on addBack()\n"; 

	hasPassed = testList.size() == 1;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}

void TestSuite::test3() {
    LinkedListOfInts testList;
	bool hasPassed = false;

    testList.addFront(0);
	std::cout << "TEST 3: Size of list on addFront()\n"; 

	hasPassed = testList.size() == 1;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}

void TestSuite::test4() {
    LinkedListOfInts testList;
	bool hasPassed = false;

    testList.removeFront();
	std::cout << "TEST 4: Size of list on removeFront() on empty list\n"; 

	hasPassed = testList.size() == 0;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}

void TestSuite::test5() {
    LinkedListOfInts testList;
	bool hasPassed = false;

    testList.addFront(0);
    testList.removeFront();
	std::cout << "TEST 5: Size of list on addFront() followed by removeFront()\n"; 

	hasPassed = testList.size() == 0;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}

void TestSuite::test6() {
    LinkedListOfInts testList;
	bool hasPassed = false;

    testList.addFront(0);
    testList.removeBack();
	std::cout << "TEST 6: Size of list on addFront() followed by removeBack()\n"; 

	hasPassed = testList.size() == 0;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}

void TestSuite::test7() {
    LinkedListOfInts testList;
	bool hasPassed = false;

	std::cout << "TEST 7: Checking functionality of isEmpty with an empty list\n"; 

	hasPassed = testList.isEmpty();
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }

    hasPassed = false;

    std::cout << "TEST 7: Checking functionality of isEmpty with a non-empty list\n"; 

    testList.addFront(1);
    testList.removeBack();
	hasPassed = testList.isEmpty();
	
    if(!hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}

void TestSuite::test8() {
    LinkedListOfInts testList;
	bool hasPassed = false;

	std::cout << "TEST 8: search() on empty list should return false\n"; 

	hasPassed = testList.search(0) == false;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }

    hasPassed = false;

    std::cout << "TEST 8: search() of value not in list should return false\n"; 

    testList.addFront(1);
    hasPassed = testList.search(0) == false;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }

    hasPassed = false;

    std::cout << "TEST 8: search() of value in list should return true\n"; 

    testList.addFront(0);
    hasPassed = testList.search(0) == true;
	
    if(hasPassed) {
        std::cout << "\tPASSED\n" << std::endl;
    } else {
        std::cout << "\tFAILED\n" << std::endl;
    }
}
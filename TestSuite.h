/**
*	@file TestSuite.h
*	@author Marcus Leong
*	@date 04-15-2019
*	@brief A header file for TestSuite class
*/

#ifndef TEST_SUITE_H
#define TEST_SUITE_H

#include <iostream>
#include <vector>
#include "List.h"
#include "Node.h"

class TestSuite {
	public:
	/** @pre None.
	*   @post A new test is created
	*/
	TestSuite();

    /** @pre None.
    *   @post Executes all tests
    *   @return None.
    */
    void runTest();

	/** @pre None.
	*   @post Tests if the size of an empty list is 0.
	*   @return None.
	*/	
	void test1();

	/** @pre None.
	*   @post Tests the size of the list after calling addBack()
	*   @return None.
	*/	
	void test2();

    /** @pre None.
	*   @post Tests the size of the list after calling addFront()
	*   @return None.
	*/	
	void test3();

    private:
    // const std::vector<int>& vectorCopy;
};

#endif

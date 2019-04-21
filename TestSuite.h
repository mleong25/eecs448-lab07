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

    /** @pre None.
	*   @post Tests the size of the list after calling removeFront() on empty list
	*   @return None.
	*/	
    void test4();

    /** @pre None.
	*   @post Tests the size of the list after calling addFront() followed by removeFront()
	*   @return None.
	*/	
    void test5();

    /** @pre None.
	*   @post Tests the size of the list after calling addFront() followed by removeBack()
	*   @return None.
	*/	
    void test6();

    /** @pre None.
	*   @post Tests if isEmpty functions properly.
	*   @return None.
	*/	
    void test7();

    /** @pre None.
	*   @post Tests if search() is working properly.
	*   @return None.
	*/	
    void test8();

    /** @pre None.
	*   @post Tests if addFront() produces a proper list.
	*   @return None.
	*/	
    void test9();

    /** @pre None.
	*   @post Tests if addBack() produces a proper list.
	*   @return None.
	*/	
    void test10();

    /** @pre None.
	*   @post Tests if removeBack() functions properly.
	*   @return None.
	*/	
    void test11();

    /** @pre None.
	*   @post Tests if removeFront() functions properly.
	*   @return None.
	*/	
    void test12();

    private:
    std::vector<int> testVector;
    std::vector<int> myVector;
};

#endif

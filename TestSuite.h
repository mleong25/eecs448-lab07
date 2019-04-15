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
	*   @post Prints the passed/failed test for isEmpty()
	*   @return None.
	*/	
	void test1();

	/** @pre None.
	*   @post None.
	*   @return the number of elements in the list.
	*/	
	int size() const;

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if the value is in the list, false otherwise.
	*/	
	bool search(int value) const;

	/** @pre None
	*   @post None
	*   @return A standard vector with the contents of the list
	*   NOTE: This method is guaranteed to work. It's only one guaranteed though
	*/	
	std::vector<int> toVector() const;

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return none.
	*/	
	void addBack(int value);

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return none.
	*/	
	void addFront(int value);

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return true if the back element was removed, false if the list is empty.
	*/	
	bool removeBack();	

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if the front element was removed, false if the list is empty.
	*/	
	bool removeFront();

    private:
    const std::vector<int>& vectorCopy;
};

#endif

#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o -o prog


main.o: main.cpp 
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command
TestSuite.o: TestSuite.cpp
	g++ -g -Wall -std=c++11 -c TestSuite.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog

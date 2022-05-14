Sort.o: Sort.h Sort.cpp
	g++ -c Sort.cpp

BubbleSort.o: BubbleSort.h BubbleSort.cpp Sort.o
	g++ -c BubbleSort.cpp 

QuickSort.o: QuickSort.h QuickSort.cpp Sort.o
	g++ -c QuickSort.cpp

RecursiveBinarySearch.o: RecursiveBinarySearch.h RecursiveBinarySearch.cpp 
	g++ -c RecursiveBinarySearch.cpp

main: Sort.o BubbleSort.o QuickSort.o RecursiveBinarySearch.o main.cpp
	g++ Sort.o BubbleSort.o QuickSort.o RecursiveBinarySearch.o main.cpp
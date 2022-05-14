#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <vector>

class RecursiveBinarySearch
{
public:
    bool search(std::vector<int> list, int x);
    bool helper(std::vector<int> *helperList, int x, int start, int end);
};
#endif
#include "RecursiveBinarySearch.h"
#include <iostream>

using namespace std;

bool RecursiveBinarySearch::search(std::vector<int> list, int x) {
    std::vector<int>* tempList = new std::vector<int>();
    for (int i : list) (*tempList).push_back(i);
    return helper(tempList, x, 0, list.size()-1);
}

bool RecursiveBinarySearch::helper(std::vector<int>* helperList, int x, int start, int end) {
    if (start == end) {
        if ((*helperList)[start] == x) return true;
        return false;
    }

    int mid = start + (end - start) / 2;
    // cout << "mid: " << mid << endl;
    if ((*helperList)[mid] == x) return true;
    else if ((*helperList)[mid] < x) helper(helperList, x, mid+1, end);
    else helper(helperList, x, start, mid-1); 
}
#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"
#include <vector>

class QuickSort : public Sort
{
public:
    virtual std::vector<int> sort(std::vector<int> list);
    void partition(std::vector<int> *sublist, int start, int end);
};
#endif
#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "Sort.h"
#include <vector>

class BubbleSort : public Sort
{
public:
    BubbleSort();
    virtual std::vector<int> sort(std::vector<int> list);
};
#endif
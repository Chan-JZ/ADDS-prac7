#include "QuickSort.h"
#include <iostream>

using namespace std;


void QuickSort::partition(std::vector<int> *sublist, int start, int end) {
    if (start == end) {
        cout << "Base case!" << endl;
        return;
    }

    cout << "sublist content" << endl;
    for (int i=start; i<=end; i++) cout << (*sublist)[i] << " ";
    cout << endl;
    int pivot;
    int index1 = start;
    int index2 = end;
    if (end - start >= 2) pivot = start+2;
    else pivot = end;
    cout << "pivot at start: " << pivot << endl;
    while (index1 <= index2) {
        cout << "iteration" << endl;
        if ((*sublist)[index1] <= (*sublist)[pivot]) index1++;
        else if ((*sublist)[index2] >= (*sublist)[pivot]) index2--;
        else {
            swap((*sublist)[index1], (*sublist)[index2]);
            index1++;
            index2--;
        }
    }


    if (pivot < index2) {
        swap((*sublist)[pivot], (*sublist)[index2]);
        pivot = index2;
    }
    else if (pivot > index1) {
        swap((*sublist)[pivot], (*sublist)[index1]);
        pivot = index1;
    }

    
    cout << "result:" <<endl;
    for (int i=start; i<=end; i++) cout << (*sublist)[i] << " ";
    cout << endl;
    cout << "Pivot: " << pivot << endl;

    if (pivot-1 >= start) partition(sublist, start, pivot-1);
    if (pivot+1 <= end) partition(sublist, pivot+1, end);
    return;
}

std::vector<int> QuickSort::sort(std::vector<int> list) {
    std::vector<int>* partitionList = new std::vector<int>();
    int n = list.size();
    for (int i : list) (*partitionList).push_back(i);
    partition(partitionList, 0, n-1);
    return (*partitionList);
}
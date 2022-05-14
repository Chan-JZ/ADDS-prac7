#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // vector<int> list1 = {10, 7, 6, 5, 3, 9};
    BubbleSort *bs1 = new BubbleSort();
    QuickSort *qs1 = new QuickSort();
    RecursiveBinarySearch *rbs = new RecursiveBinarySearch();
    // vector<int> result = bs1->sort(list1);
    // for (int i : result) cout << i << " ";
    // cout << endl; 

    // vector<int> result2 = qs1->sort(list1);
    // for (int i : result2) cout << i << " ";
    // cout << endl;

    // cout << rbs->search(result, 7) << endl;

    vector<int> list2;
    int x;
    while (cin >> x) list2.push_back(x);

    // for (int i : list2) cout << i << " ";
    // cout << endl;
    // cout << list2.size() << endl;
    return 0;
}
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> list1 = {1, 3, 5, 4, -5, 100, 7777, 2014, 0};
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

    vector<int> result3 = qs1->sort(list2);
    bool result4 = rbs->search(result3, 1);

    if (result4 == true) cout << "true ";
    else cout << "false ";
    for (int i : result3) cout << i << " ";
    cout << endl;

    for (int i : list2) cout << i << " ";
    cout << endl;
    cout << list2.size() << endl;
    return 0;
}
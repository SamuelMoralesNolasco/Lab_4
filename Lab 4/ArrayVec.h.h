#ifndef ARRAYVEC_H
#define ARRAYVEC_H

#include <vector>

class ArrayVec {
public:
    ArrayVec();
    void randGenArr(int arr[], int n, int exclusive_range);
    void randGenVec(std::vector<int> &v, int n, int exclusive_range);
    int getSize(const int arr[], int cap);
};

#endif

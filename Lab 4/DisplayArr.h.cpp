#ifndef DISPLAYARR_H  // Include the "_H" for standard header file naming conventions
#define DISPLAYARR_H

#include <iostream>
#include <vector>

class DisplayArr {
public:
    DisplayArr();
    void printArray(const int arr[], int size);
    int getArrMemSize(const int arr[], int size);
    void printMetaArray(int arr[], int size);
    const int* getAddress(int arr[], int index);
};

#endif

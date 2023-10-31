#include <iostream>
#include "DisplayArr.h"  // Include the necessary header file
using namespace std;

/**
* @brief Construct a new DisplayArr object
*/
DisplayArr::DisplayArr() {
    // Constructor implementation (if any)
}

/**
* @brief prints the integers in the arr
* @param arr
* @param size
*/
void DisplayArr::printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
}

/**
* @brief returns the memory size of the array
* @param arr
* @param size
* @return int
*/
int DisplayArr::getArrMemSize(const int arr[], int size) {
    int mem_size = 0;
    for (int i = 0; i < size; i++) {
        mem_size += sizeof(arr[i]);
    }
    return mem_size;
}

/**
* @brief returns pointer to the address of an element in arr at the index-th
* @param arr
* @param index
* @return const int*
*/
const int* DisplayArr::getAddress(int arr[], int index) {
    int* addr = &arr[index];
    return addr;
}

/**
* @brief prints the total size of the arr and the memory locations of the
* first, second, and last element in arr
* @param arr
* @param size
*/
void DisplayArr::printMetaArray(int arr[], int size) {
    int mem_size = getArrMemSize(arr, size);
    int int_size = sizeof(arr[0]);
    cout << "Array has " << size << " number of integers. Each integer is worth " << int_size << " bytes." << endl;

    if (size >= 1) {
        cout << "Address of the first element: " << getAddress(arr, 0) << endl;
    }
    if (size >= 2) {
        cout << "Address of the second element: " << getAddress(arr, 1) << endl;
    }
    if (size >= 3) {
        cout << "Address of the last element: " << getAddress(arr, size - 1) << endl;
    }
}

int main() {
    // Your main function code
    const int CAPACITY = 10;
    int test_arr[CAPACITY];
    //initialize DisplayArr
    DisplayArr disp = DisplayArr();

    // populate with values
    int range = 15;
    int num_elem = 10;
    // Assume you have ArrayVec and av available for generating test_arr.

    // display contents
    int test_arr_size = CAPACITY;
    cout << "Array Elements" << endl;
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize" << endl;
    disp.printMetaArray(test_arr, test_arr_size);
}


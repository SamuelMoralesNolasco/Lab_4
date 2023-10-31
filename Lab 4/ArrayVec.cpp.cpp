#include "ArrayVec.h"
#include <cstdlib> // Include this header for rand()
#include <ctime>   // Include this header for initializing random seed

/**
 * @brief Default Constructor
 */
ArrayVec::ArrayVec() {
    // Initialize the random number generator with the current time
    srand(static_cast<unsigned>(time(nullptr));
}

/**
 * @brief Modifies arr to contain up to n integers ranging from 0 to exclusive_range
 *
 * @param arr
 * @param n
 * @param exclusive_range
 */
void ArrayVec::randGenArr(int arr[], int n, int exclusive_range) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % exclusive_range;
    }
}

/**
 * @brief Modifies v to contain up to n integers ranging from 0 to exclusive_range
 *
 * @param v
 * @param n
 * @param exclusive_range
 */
void ArrayVec::randGenVec(std::vector<int> &v, int n, int exclusive_range) {
    for (int i = 0; i < n; i++) {
        v.push_back(rand() % exclusive_range);
    }
}

/**
 * @brief Returns the size of the array, which is at most cap
 *
 * @param arr
 * @param cap (capacity)
 * @return int
 */
int ArrayVec::getSize(const int arr[], int cap) {
    int size = 0;
    for (int i = 0; i < cap; i++) {
        if (arr[i] == -1) {
            break;
        }
        size++;
    }
    return size;
}

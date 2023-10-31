/***
* CSE 2010 Fall 2023
* Lab #{4}
* { Samuel Morales } #{Coyote ID:008346748}
* {Date: 10/30/2023}
*
* {Description of lab AKA paraphrase "abstract" section from lab}
*
* {Describe 1) what was most challenging and 2) how you solved/overcame the
problem OR
* the directions of how you PLAN to solve it}
*
***/
#include "ArrayVec.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int CAPACITY = 10;
    int test_arr[CAPACITY];
    vector<int> test_vec;

    ArrayVec av;

    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(nullptr));

    int range = 15;
    int num_elem = 10;

    // Generate an array of random numbers
    av.randGenArr(test_arr, num_elem, range);

    // Generate a vector of random numbers
    av.randGenVec(test_vec, num_elem, range);

    // Get the size of the array and vector
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    int test_vec_size = test_vec.size();

    // Display the array and vector contents
    cout << "Array Elements:" << endl;
    for (int i = 0; i < test_arr_size; i++) {
        cout << test_arr[i] << " ";
    }
    cout << endl;

    cout << "Vector Elements:" << endl;
    for (int i = 0; i < test_vec_size; i++) {
        cout << test_vec[i] << " ";
    }
    cout << endl;

    return 0;
}




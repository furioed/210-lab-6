// COMSC-210 | Lab 6 | Mamadou Sissoko
// IDE used: Visual Studio Code

#include <iostream>
using namespace std;

// Function prototype for entering data
void enterArrayData(double* arr, const int size);

int main() {
    const int SIZE = 5;  // constant for array size
    double* arr = new double[SIZE]; // dynamic array allocation

    // At this stage, we only input data into the array
    enterArrayData(arr, SIZE);

    delete[] arr; // free allocated memory
    return 0;
}

// Populate the array with user input
void enterArrayData(double* arr, const int size) {
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(arr + i);  // pointer notation
    }
    cout << "Data entry complete." << endl;
}

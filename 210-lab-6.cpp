// COMSC-210 | Lab 6 | Mamadou Sissoko
// IDE used: Visual Studio Code

#include <iostream>
using namespace std;

// Function prototypes
void enterArrayData(double* arr, const int size);
void outputArrayData(double* arr, const int size);

int main() {
    const int SIZE = 5; 
    double* arr = new double[SIZE]; // dynamically allocated array

    // First we fill the array
    enterArrayData(arr, SIZE);

    // Then we print out the values to verify input
    outputArrayData(arr, SIZE);

    delete[] arr; // release memory back to the system
    return 0;
}

// Populate the array with user input
void enterArrayData(double* arr, const int size) {
    cout << "Data entry for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "    > Element #" << i << ": ";
        cin >> *(arr + i);
    }
    cout << "Data entry complete." << endl;
}

// Output the array elements
void outputArrayData(double* arr, const int size) {
    cout << "Outputting array elements: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; // pointer access
    }
    cout << endl;
}

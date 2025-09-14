// COMSC-210 | Lab 6 | Mamadou Sissoko
// IDE used: Visual Studio Code

#include <iostream>
using namespace std;

// Function prototypes
void enterArrayData(double* arr, const int size);
void outputArrayData(double* arr, const int size);
double sumArray(double* arr, const int size);

int main() {
    const int SIZE = 5; 
    double* arr = new double[SIZE]; // allocate memory dynamically

    // Step 1: fill the array
    enterArrayData(arr, SIZE);

    // Step 2: display array contents
    outputArrayData(arr, SIZE);

    // Step 3: calculate and display the sum
    double total = sumArray(arr, SIZE);
    cout << "Sum of values: " << total << endl;

    delete[] arr; // cleanup
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
        cout << *(arr + i) << " "; // use pointer arithmetic
    }
    cout << endl;
}

// Calculate and return the sum of the array
double sumArray(double* arr, const int size) {
    double sum = 0.0; // accumulator
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

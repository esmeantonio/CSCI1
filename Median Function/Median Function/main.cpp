/*
 Esmeralda Antonio
 CS 1, Section #100
 Assignment #5, Problem #3
 Median Function
 Create a function that takes in an array and the array's size
 and finds its median based on whether the size is even or odd.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <array>
using namespace std;

//PROTOTYPES
double median(int arr[], int size);
void printArray(int arr[], int size, double medianValue, string arrayName);

int main() {
    
    //Variables
    int array1[] = {1, 3, 7};
    int array2[] = {2, 4, 5, 9};
    double median1 = 0.0;
    double median2 = 0.0;
    
    median1 = median(array1, 3);
    median2 = median(array2, 4);
    printArray(array1, 3, median1, "array one");
    cout << endl;
    printArray(array2, 4, median2, "array two");
    cout << endl;
    return 0;
}


//Function to find median of an array
double median(int arr[], int size) {
    double x;
    double y;
    if ((size % 2) == 0) {
        x = *(arr + ((size-1)/2));
        y = *(arr + (size/2));
        double z = (((x * 1.0)+y) / 2);
        return z;
    } else {
        return *(arr + ((size-1)/2));
    }
}

//Function to print out array elements and median
void printArray(int arr[], int size, double medianValue, string arrayName) {
    cout << "The values of " << arrayName << " are ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    cout << "The median of " << arrayName << " is " << medianValue << endl;
}

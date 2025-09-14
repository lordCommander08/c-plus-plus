#include<iostream>
using namespace std;

int main() {
    int arr[5], i;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = arr[0];
    for (int i = 1; i < 5; i++) { // Start from index 1
        if (arr[i] < min) {
            min = arr[i]; // Update min value
        }
    }
    
    cout << "Min value is: " << min << endl; // Print min value

    cout << "Size of array is: " << sizeof(arr) / sizeof(arr[0]) << endl; // Number of elements
}

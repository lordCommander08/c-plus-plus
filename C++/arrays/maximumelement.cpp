#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n (max 10): ";
    cin >> n;

    // Check if n is within the valid range
    if (n < 1 || n > 10) {
        cout << "Please enter a number between 1 and 10." << endl;
        return 1; // Exit the program if input is invalid
    }

    int arr[10];
    cout << "Enter " << n << " array elements:" << endl;
    for (int i = 0; i < n; i++) { // Start from 0
        cin >> arr[i];
    }

    cout << endl;

    // Initialize mx and min with the first element
    int mx = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) { // Start from 1
        if (mx < arr[i]) {
            mx = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    cout << "Maximum: " << mx << endl; // Output maximum
    cout << "Minimum: " << min << endl; // Output minimum

    return 0;
    int temp;
    temp=mx;
    mx=min;
    min=temp;
     for (int i = 0; i < n; i++) { // Start from 0
        cout >> arr[i];
    }


}

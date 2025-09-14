#include<iostream>
using namespace std;

int main()
{
    int evensum = 0;
    int oddsum = 0;
    int n;
    
    cout << "Enter the number of elements in the array (max 10): " << endl;
    cin >> n;
    
    if (n > 10) {
        cout << "The number of elements should not exceed 10." << endl;
        return 1;
    }

    int arr[10];
    
    cout << "Enter " << n << " array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evensum += arr[i];
        } else {
            oddsum += arr[i];
        }
    }
    
    cout << "Sum of even numbers: " << evensum << endl;
    cout << "Sum of odd numbers: " << oddsum << endl;
    
    int a = evensum - oddsum;
    cout << "Difference between sum of even and odd numbers: " << a << endl;
    
    return 0;
}

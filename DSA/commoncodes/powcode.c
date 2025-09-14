#include <iostream>
#include <cmath> // Include cmath for the pow function
using namespace std;

int main() {
    int n;
    cout << "Enter the limit of the power: ";
    cin >> n;

    // Calculate 2 raised to the power of n
    int a = pow(2, n);
    cout << a << endl; // Print the result
    // Return 0 to indicate successful execution
}

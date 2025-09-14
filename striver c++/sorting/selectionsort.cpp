#include<iostream>
using namespace std;

void s_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int minindex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[minindex], arr[i]);
    }
}

int main(){
    int arr[4] = {3, 2, 1, 5};
    int n = 4;

    s_sort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

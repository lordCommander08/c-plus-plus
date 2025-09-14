#include<iostream>
using namespace std;
int main(){
    int arr[5]={11,22,35,45,46};
    int count=0;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            count = 1;
            break;
        }
    }
    if(count==0){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
}
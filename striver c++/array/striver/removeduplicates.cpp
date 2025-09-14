#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,1,2,2,2,3};
    int i=0;
    for(int j=1;j<6;j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout<<"size of new array is = "<<i+1;
    cout<<endl;
    cout<<"array after removing duplicates: ";
    for(int x=0;x<=i;x++){
        cout<<arr[x]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
int findmissing(int arr[],int n){
    int s=n*(n+1)/2;
    int count=0;
    for(int i=0;i<n-1;i++){
        count=count+arr[i];
    }
    return s-count;
}
int main(){
    int arr[]={1,2,4,5,3,7};
    int n =7;
    int missing=findmissing(arr,n);
    cout<<"missing element is = "<<missing;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"Enter the limit of the array: "<<n<<endl;
    vector<int> arr(n-1);
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    for(auto it:arr){
        sum-=it;
    }
    cout<<sum;
}
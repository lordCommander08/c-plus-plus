#include<bits/stdc++.h>
using namespace std;
vector<int> findintersection(int a[],int b[],int n,int m){
    vector<int> temp;
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            if(temp.empty() || temp.back()!=a[i])
            temp.push_back(a[i]);
            i++,j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return temp;
}
int main(){
    cout<<"SMUGG"<<endl;
    int a[]={1,3,4,2,6,7};
    int n=6;
    int b[]={8,2,3,4,6,7};
    int m =6;
    vector<int> result=findintersection(a,b,n,m);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
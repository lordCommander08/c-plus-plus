#include<bits/stdc++.h>
using namespace std;
int countdown(int n){
    if(n==0) return 0 ;
    cout<<"bday is in "<<n<<" days"<<endl;
    countdown(n-1);
}
int  main(){
    cout<<countdown(10);
    return 0;
}
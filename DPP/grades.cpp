#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter marks : ";
    cin>>n;
    if(n>=90)
    {
        cout<<"GRADE A";
    }
    else if(n>=80 && n<90)
    {
        cout<<"GRADE B";
    }
    else{
        cout<<"grade c";
    }
}
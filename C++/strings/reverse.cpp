#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s="singh";
    string b="";
    b=reverse(s.begin(),s.end());
    // b=reverse(s.begin(),s.begin()+2);
    if(b==s){
        cout<<"The string is palindrome"<<endl;
    }
    cout<<s<<endl<<b<<endl;
}
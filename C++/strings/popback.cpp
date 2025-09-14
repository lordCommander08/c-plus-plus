#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"enter string: ";
    getline(cin,s);
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
}
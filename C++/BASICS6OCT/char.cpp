#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any character: ";
    cin>>ch;
    if(ch>65 && ch<90)
    {
        cout<<"upper case"<<endl;
        cout<<(int)ch;
    }
    else if(ch>97 && ch>122)
    {
        cout<<"lower case"<<endl;
        cout<<(int)ch;
    }
    else{
        cout<<"special character"<<endl;
        cout<<(int)ch;
    }
}
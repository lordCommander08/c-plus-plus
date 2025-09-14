#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character: ";
    cin>>ch;
    if(ch>=97 && ch<=122)
    {
        cout<<"lower case";
    }
    else if(ch>=65 && ch<=90)
    {
        cout<<"upper case: ";
    }
    else{
        cout<<"other character: ";
    }
}
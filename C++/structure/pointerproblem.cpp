#include<iostream>
using namespace std;
typedef int* pointer;
int main()
{
    int x=69,y=89;
    pointer a=&x,b=&y;
    // int* b=&y;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
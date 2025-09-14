#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the value for x axis\n";
    cin>>x;
    int y;
    cout<<"enter the value for y axis\n";
    cin>>y;
    if(x>0 && y>0)
    {
        cout<<"1st quadrant";
    }
     else if(x<0 && y>0)
    {
        cout<<"2nd quadrant";
    }
    if(x<0 && y<0)
    {
        cout<<"3rd quadrant";
    }
    if(x>0 && y<0)
    {
        cout<<"4th quadrant";
    }
}
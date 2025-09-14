#include<iostream>
using namespace std;
int main()
{
    int area,perimeter,length;
    cout<<"enter the length"<<endl;
    cin>>length;
    int breadth;
    cout<<"enter the breadth"<<endl;
    cin>>breadth;
    area=length*breadth;
    cout<<"area is = "<<endl;
    cout<<area<<endl;
    perimeter=2*(length+breadth);
    cout<<"perimeter is ="<<endl;
    cout<<perimeter<<endl2;
    if(area>perimeter)
    {
        cout<<"area is greater";
    }
    else
    {
        cout<<"perimeter is greater";
    }
}

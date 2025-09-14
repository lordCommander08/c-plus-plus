#include<iostream>
using namespace std;
int main()
{
    float x , p , r , t ;
    cout <<"enter the principle" << endl ;
    cin >> p;
    cout <<" enter the rate" << endl ;
    cin >> r;
    cout <<" enter the time" << endl ;
    cin >> t;
    x = p * r * t / 100 ;
    cout << x ;
}
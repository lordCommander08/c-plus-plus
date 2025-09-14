#include<iostream>
using namespace std;
int main()
// {
//     int j;
//     cout<<j;
//     while(j<=10)
//     {
//         cout<<j<<" ";
//         j++;
//     }
//     return 0;
// }
// do while loop
// {
//     int a;
//     cout<<"enter the value of a: ";
//     cin>>a;
//     do{
//         cout<<"GOOD MORNING";
//     }
//     while(a==10);
//     return 0;
// }
{
    int a = 65;
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        cout<<(char)a<<" ";
        a=a+1;
    }
}
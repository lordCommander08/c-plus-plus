// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j--)
//         {
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }
// }
#include<iostream>
using namespace std;
int main()
{
    int a=40;
    int* b=&a;
    cout<<&b;
}
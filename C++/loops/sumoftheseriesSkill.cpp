// #include<iostream> //alternate series sum
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++)
//     { 
//     if(i%2!=0) 
//     {
//         sum=sum+i;
//     }
//     else 
//     {
//         sum = sum-i;
//     }
//     }
//     cout<<sum;
// }     
// another method
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the limit of the series: ";
    cin>>n;
    int sum=0;
    if(n%2==0)
    {
        sum=-n/2;
    }
    else{
        sum=-n/2+n;
    }
    cout<<sum;
    return 0;
}
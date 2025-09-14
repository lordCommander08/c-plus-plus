// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int a=0;
//     int i;
//     cout<<"enter the value of n = ";
//     cin>>n;
//     for(i=2;i<=n/2;i++)
//     {
//     if(n%i==0)
//     {
//         a=1;
//         break;
//     }
//     }
//     if(a==0)
//     {
//         cout<<"the given number is prime";
//     }
//     else
//     {
//         cout<<"the given number is composite";
//     }
     
// }
// prime number code by ratna skill
#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0){
        cout<<"given number is a prime number\n";
    }
    else{
        cout<<"the given number is not a prime number";
    }
    return 0;
}
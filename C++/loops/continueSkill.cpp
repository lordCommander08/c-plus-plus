// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<10;i++)
//     {
//         if(i%3==0){
//             continue;
//         }   
//          cout<<i<<" ";
//         }
// } 
#include<iostream>
using namespace std;
int main()
{
    int remainder=0;
    int r=0;
    int n;
    cout<<"enter the number: ";
    cin>>n;
    while(n!=0)
    {
        remainder=n%10;
        r=r*10+remainder;
        n=n/10;
    }
    cout<<"the reverse of the given number is: "<<r;
    return 0;
}  
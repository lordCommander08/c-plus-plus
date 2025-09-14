// // factorial code
// #include<iostream>
// using namespace std;
//  int fact(int n){
//     if(n==0 || n==1){
//         cout<<1;
//     }
//     else{
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;
//     }}
// int main()
// {
//     int x;
//     cout<<"enter the value of x: ";
//     cin>>x;
//     cout<<fact(x);
// }
// sqrt
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
   
//    cout<<sqrt(9);
// }
// combination and permutation
// #include<iostream>
// using namespace std;
// int function(int n,int r){
//    int nfact=1;
//    for(int i=1;i<=n;i++){
//       nfact=nfact*i;
//    }
//    int rfact=1;
//    for(int i=1;i<=r;i++){
//       rfact=rfact*i;
//    }
//    int x=(n-r);
//    int xfact=1;
//    for(int i=1;i<=x;i++){
//       xfact=xfact*i;
//    }
//    int a;
//    a=nfact/(rfact*xfact);
//    return a;
// }
// int main()
// {
//    int n;
//    cout<<"enter the value of n:";
//    cin>>n;
//    int r;
//    cout<<"enter the value of r:";
//    cin>>r;
//   cout<<function(n,r);
// }
// pascal triangle
// #include<iostream>
// using namespace std;
// int pascal(int a,int b){
//    int nfact=1;
//    for(int i=1;i<=a;i++){
//       nfact=nfact*i;
//    }
//    int rfact=1;
//    for(int i=1;i<=b;i++){
//       rfact=rfact*i;
//    }
//    int x=(a-b);
//    int xfact=1;
//    for(int i=1;i<=x;i++){
//       xfact=xfact*i;
//    }
//    int z;
//    z=nfact/(rfact*xfact);
//    return z;
// }
// int main()
// {
//    int n;
//    cout<<"enter the value of n:";
//    cin>>n;
//    for(int i=0;i<=n;i++)
//    {
//       for(int j=0;j<=i;j++)
//       {
//          cout<<pascal(i,j)<<" ";
//       }
//       cout<<endl;
//    }
// }
// #include<iostream>
// using namespace std;
// int hcf(int a,int b){
//    int gcf=1;
//    for(int i=1;i<=min(a,b);i++)
//    { 
//       if(a%i==0 && b%i==0)
//       {
//          gcf=i;
//       }
//    }
//    return gcf;
// }
// int main()
// {
//    int x;
//    cout<<"enter the value of x: ";
//    cin>>x;
//    int y;
//    cout<<"enter the value of y: ";
//    cin>>y;
//    cout<<hcf(x,y);
// }
// factorial
// #include<iostream>
// using namespace std;
// int fact(int a){
//    int fact=1;
//    for(int i=1;i<=a;i++)
//    {
//       fact*=i;
//    }
//    return fact;
// }
// int main()
// {
//    int n;
//    cout<<"enter the value of n: ";
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//       cout<<fact(i)<<" ";
//    }
// }
// swapping of two numbers
#include<iostream>
using namespace std;
void swap(int a,int b){
   a=a+b;
   b=a-b;
   a=a-b;
   // cout<<a<<endl<<b;
}
int main()
{
   int a=12;
   int b=66;
   swap(a,b);
   cout<<a<<" "<<b;
   return 0;
}
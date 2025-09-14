 #include<iostream>
 using namespace std;
  int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     if(n>99 || n<1000)
//     {
//         cout<<"3 digit number";
//     }
//     else{
//         cout<<"not a 3 digit number";
//     }
// }
{
    int a,b,c;
    cout<<"enter the value of a,b,c: ";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && b>c)
    {
        cout<<" a is large";
    }
    else{
        cout<<"false";
    }
}
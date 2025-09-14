// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int c=1;
// // //     int a;
// // //     cout<<"enter the number of rows: ";
// // //     cin>>a;
// // //     // int b;
// // //     // cout<<"enter the number of coloumns: ";
// // //     // cin>>b;
// // //     for(int i=1;i<=a;i++)
// // //     {
// // //         for(int j=1;j<=2*i-1;j+=2)
// // //         {
// // //             cout<<j<<' ';
            
// // //         }  
// // //         cout<<"\n";
// // //     }
// // // }

// // // ALPHABET TRIANGLE
// // // staR TRIANLE;
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int a;
// // //     cout<<"enter the number of rows: ";
// // //     cin>>a;
// // //     int mid=(a/2)+1;
// // //     // int b;
// // //     // cout<<"enter the value of columns: ";
// // //     // cin>>b;
// // //     for(int i=1;i<=a;i++)
// // //     {
// // //         for(int j=1;j<=a;j++)
// // //         {
// // //             if(i==mid || j==mid)
// // //             {
// // //                 cout<<"*";
// // //             }
// // //             else{
// // //             cout<<' ';
// // //             }
// // //         }
// // //         cout<<"\n";
// // //     }
// // // }
// // // cross pattern;
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int a;
// // //     cout<<"enter the number of rows: ";
// // //     cin>>a;
// // //      int b;
// // //     cout<<"enter the value of columns: ";
// // //     cin>>b;
// // //     for(int i=1;i<=a;i++)
// // //     {
// // //         for(int j=1;j<=a;j++)
// // //         {
// // //             if(i==j)
// // //             {
// // //                 cout<<"*";
// // //             }
// // //             else if(i+j==6){
// // //             cout<<"*";
// // //             }
// // //             else{
// // //                 cout<<" ";
// // //             }
// // //         }
// // //         cout<<"\n";
// // //     }
// // // }
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int count=1;
// //     int n;
// //     cout<<"enter the value of n: ";
// //     cin>>n;
// //     for(int i=1;i<=n;i++)
// //     {
// //         for(int j=1;j<=i;j++)
// //         {
// //             cout<<count<<' ';
// //             count++;
// //         }
// //         cout<<"\n";
// //     }
// // }
// // binary triangle
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cout<<"enter the limit of the pattern: ";
// //     cin>>n;
// //     int a=5;
// //     for(int i=1;i<=n;i++)
// //     {
// //         if(i%2!=0) a=1;
// //         else a=0;
// //         for(int j=1;j<=i;j++)
// //         {
// //             cout<<a<<' ';
// //             if(a==1) a=0;
// //             else a=1;
// //         }
// //         cout<<endl;
// //     }
// // }
// // right side triangle
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int r;
// //     cout<<"enter the number of rows: ";
// //     cin>>r;
// //     for(int i=1;i<=r;i++)
// //     {
// //         for(int j=1;j<=r-i;j++)
// //         {
// //             cout<<" ";
// //         }
// //         for(int k=1;k<=i;k++)
// //         {
// //             cout<<"*";
// //         }
// //         cout<<"\n";
// //     }
// //     return 0;
// // }
// rhombus
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {cout<<" ";}
//         for(int k=1;k<=n;k++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// // pyramid triangle
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {cout<<" ";}
//         for(int k=1;k<=i;k++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//right side pattern
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// right side triangle with values
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++)
//         {
//             cout<<k;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }
// pyramid triangle
// #include<iostream>
// using namespace std;
// int main()
// {
//     int  n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int k=1;k<=n-i;k++)
//         {
//             cout<<" ";
//         }
//         for(int j=1;j<=2*i-1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }
// number pyrmaid pallindrome
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             cout<<" ";
//         }
//         for(int k=1;k<=2*i-1;k++)
//         {
//             cout<<k;
//         }
//         for(int l=i-1;l>=1;l--)
//         {
//             cout<<l;
//         }  
//         cout<<endl;
//     }
//     return 0;
// }
// star diamond'
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the limit: ";
//     cin>>n;
//     int nst =1;
//     int nsp=n-1;
//     for(int i=1;i<=2*n-1;i++)
//     {
//         for(int j=1;j<=nsp;j++)
//         {
//             cout<<" ";
//         }
//         if(i<=n-1) nsp--;
//         else nsp++;
//         for(int k=1;k<=nst;k++)
//         {
//             cout<<"*";
//         }
//         if(i<=n-1) nst+=2;
//         else nst-=2;
//         cout<<endl;
//     }
//     return 0;
// }
// bridge pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<"*";
        }
        else{
            for(int j=1;j<=n-i+1;j++)
        {
            cout<<"* " ;
        }
        }
        cout<<endl;
    }
}
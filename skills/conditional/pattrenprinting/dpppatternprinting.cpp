// // // // //problem1.
// // // // #include<iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int n;
// // // //     cout<<"enter the number of rows: ";
// // // //     cin>>n;
// // // //     for(int i=1;i<=n;i++)
// // // //     {
// // // //         for(int j=1;j<=n;j++)
// // // //         {
// // // //             cout<<i<<" ";
// // // //         }
// // // //         cout<<"\n";
// // // //     }
// // // //     return 0;
// // // // }
// // // // problem 2
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int a=1;
// // //     int n;
// // //     cout<<"enter the number of rows: ";
// // //     cin>>n;
// // //    for(int i=1;i<=n;i++)
// // //    {
// // //     for(int j=1;j<=n-i+1;j++)
// // //     {
// // //         cout<<j<<" ";
// // //     }
// // //     cout<<endl;
// // //    }
// // //     return 0;
// // // }
// // // problem 3
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int a=1;
// // //     int n;
// // //     cout<<"enter the number of rows: ";
// // //     cin>>n;
// // //    for(int i=1;i<=n;i++)
// // //    {
// // //     for(int j=1;j<=i;j++)
// // //     {
// // //         cout<<(char)(j+64)<<" ";
// // //     }
// // //     cout<<endl;
// // //    }
// // //     return 0;
// // // }
// // // problem 4
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int a=1;
// //     int n;
// //     cout<<"enter the number of rows: ";
// //     cin>>n;
// //    for(int i=1;i<=n;i++)
// //    {
// //     for(int j=1;j<=i;j++)
// //     if(i%2==0)
// //     {
// //         cout<<(char)(j+64)<<" ";
// //     }
// //     else{
// //         cout<<j<<" ";
// //     }
// //     cout<<endl;
// //    }
// //     return 0;
// // }
// // // problem 5
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     int m=n-1;
//     for(int i=1;i<=m;i++)
//     {
//         for(int j=1;j<=m-i+1;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// // problem 6
// #include<iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout<<"enter the value of m: ";
//     cin>>m;
//     int n;
//     cout<<"enter the value of n: ";
//     cin>>n;
//     for(int i=1;i<=m;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(i==1 || i==m)
//             {
//                 cout<<"*"<<" ";
//             }
//             else if(j==1 || j==n)
//             {
//                 cout<<"*"<<" ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // #include<bits/stdc++.h>
// // using namespace std;
// // void countdown(int n){
// //     if (n == 51) {
// //         return;
// //     }
// //     if(n%2==0){
// //         cout<<n<<endl;
// //         countdown(n+1);
// //         return;
// //     }
// //     n=n+1;
// //     countdown(n);
// // }
// // int  main(){
// //     // cout<<"print n to 1"<<endl;
// //     // int n;
// //     // cin>>n;
// //     countdown(1);
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*n+factorial(n-1);
// }
// int main(){
//     cout<<"enter the number of which u want to find the factorial"<<endl;
//     int n;
//     cin>>n;
//     int a=factorial(n);
//     cout<<a;
//     return 0;
// }
// // #include<bits/stdc++.h>
// // using namespace std;
// // int pow(int a,int b){
// //     if(b==0){
// //         return 1;
// //     }
// //     return a*pow(a,(b-1));
// // }
// // int main(){
// //     cout<<"pow of a"<<endl;
// //     cout<<pow(2,7 );
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int fibseries(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fibseries(n-1)+fibseries(n-2);
// }
// int main(){
//     cout<<"enter the number of which u want to find the factorial"<<endl;
//     int n;
//     cin>>n;
//     int a=fibseries(n);
//     cout<<a;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void  sumofarray(int arr[],int index,int n,int sum){
    if(index==n){
        cout<<sum;
        return;
    }
    sumofarray(arr,index+1,n,sum+arr[index]);
}
int main(){
    int arr[5]={1,2,3,4,5};
    sumofarray(arr,0,5,0);
    return 0; 
}
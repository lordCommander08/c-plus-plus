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
// #include<bits/stdc++.h>
// using namespace std;
// int minofarray(int arr[],int n){
//     if(n==1){
//         return arr[0];
//     }
//     return min(arr[n-1],minofarray(arr,n-1));
// }
// int main(){
//     int arr[5]={190,23,31,42,53};
//     cout<<minofarray(arr,5);
//     return 0; 
// }
// #include<bits/stdc++.h>
// using namespace std;
// void rev(string &str,int start,int end){
//     if(start>=end){
//         return;
//     }
//     swap(str[start],str[end]);
//     rev(str,start+1,end-1);
// }
// int main(){
//     string s="Deependra";
//     rev(s,0,s.size()-1);
//     cout<<s;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool linearsearch(int arr[],int index,int n,int x){
//     if(n==0){
//         return false;
//     }
//     if(arr[index]==x){
//         return true;
//     }
//     return linearsearch(arr,index+1,n-1,x);
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n;
//     cout<<"enter the number you want to search"<<endl;
//     cin>>n;
//     cout<<linearsearch(arr,0,5,n);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// bool binarysearch(int arr[],int low,int high,int x){
//     if(low>high) return false;
//     int mid=(low+high)/2;
//     if(arr[mid]==x) return true;
//     if(arr[mid]>x){
//         return binarysearch(arr,low,mid-1,x);
//     }
//     return binarysearch(arr,mid+1,high,x);
// }
// int main(){
//     int arr[]={1,3,7,89,8,43,23,25};
//     int high = sizeof(arr)/sizeof(arr[0]) - 1;
//     int low=0;
//     cout<<"enter the element u want to search"<<" ";
//     int key;
//     cin>>key;
//     int a=binarysearch(arr,low,high,key);
//     cout<<a;
//     return 0;
// }
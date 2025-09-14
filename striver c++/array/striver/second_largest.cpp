#include<iostream>
using namespace std;
int main(){
    // better solution
//     int arr[5]={44,22,31,46,78};
//     int largest=arr[0];
//    for(int i = 0; i < 5; i++) {
//         if(arr[i]>largest){ 
//             largest=arr[i]; //first largest
//         }
//     }
//     cout<<largest;
//     int slargest=-1;
//     for(int i = 0; i < 5; i++) {
//         if(arr[i]>slargest && arr[i]<largest){
//             slargest=arr[i]; //second largest
//         }
//     }
//     cout<<endl<<slargest;
//     return 0;
 // optimal solution
 int arr[5]={44,22,31,46,78};
 int largest=arr[0];
 int slargest=-1;
 for(int i=0;i<5;i++){
    if(arr[i]>largest){
        slargest=largest;
        largest=arr[i];
    }
    else if(arr[i]<largest && arr[i]>slargest){
        slargest=arr[i];
    }
 }
 cout<<"largest element is = "<<largest<<endl<<"second largest element is = "<<slargest;
 return 0;
}

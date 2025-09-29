#include<bits/stdc++.h>
using namespace std;
void helper(int num,string output,string options[]){
    if(num==0){
        cout<<output<<" ";
        return;
    }
    int n1= num%10;
    string s1=options[n1];
    for(int i=0;i<s1.length();i++){
        helper(num/10,s1[i] + output,options);
    }
}
int main(){
    int num;
    cout<<"enter a number = ";
    cin>>num; 
    string output="";
    string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    helper(num,output,options);
    return 0;
}
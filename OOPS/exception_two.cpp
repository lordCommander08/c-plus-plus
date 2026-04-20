#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
    int *p = new int[1000000000];
    cout<<"Memory exception is successfull\n";
    delete[]p;
    }
    catch(const exception &e){
        cout<<"exception occured: "<<e.what()<<endl;
    }
}
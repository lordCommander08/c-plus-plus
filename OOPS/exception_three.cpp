#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=-10,b=9;
    try{
        if(b == 0){
            throw runtime_error("division by zero");
        }
        if(a<0){
            throw "negative value not allowed";
        }
    }
    catch(const runtime_error &e){
        cout<<"Runtime error: "<<e.what()<<endl;
    }
    catch(const char* msg){
        cout<<"Error: "<<msg << endl;
    }
    catch(...){
        cout <<"Unknown exception occurred"<< endl;
    }
}
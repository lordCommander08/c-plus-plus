#include<bits/stdc++.h>
using namespace std;
class myexception{
    public:
        string msg;
    myexception(string msg){
        this->msg=msg;
    }

    string what() const{
        return msg;
    }
};

int main(){
    int c;
    int a=10,b=0;
    try{
        throw myexception("custom exception");
    }
    catch(const myexception &e){
        cout<<e.what()<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;

class Myexception : public exception {
    string msg;
public:
    Myexception(string msg){
        this->msg = msg;
    }

    const char* what() const noexcept override {
        return msg.c_str();
    }
};

int main(){
    int a = 10, b = 0;

    try{
        if(b == 0){
            throw Myexception("operation cannot be performed");
        }
        int c = a / b;
    }
    catch(const bad_alloc &e){
        cout << "exception occurred: " << e.what() << endl;
    }
    catch(...){
        cout<< " Default exception " << endl;
    }
}
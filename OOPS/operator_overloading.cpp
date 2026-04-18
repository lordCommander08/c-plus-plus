#include<bits/stdc++.h>
using namespace std;
class chirag{
    int real;
    int imaginary;
    public:
        chirag(){

        };
        chirag(int real,int imaginary){
            this->real=real;
            this->imaginary=imaginary;
        };

        void display(){
            cout<<real<<"+i"<<imaginary<<endl;
        }

       chirag operator +(chirag &c){
            chirag ans;
            ans.real = real + c.real;
            ans.imaginary = imaginary + c.imaginary;
            return ans;
        }
};
int main(){
    chirag c(2,3);
    chirag d(5,7);
    chirag s = c+d;
    // c.display();
    // d.display();
    s.display();
}
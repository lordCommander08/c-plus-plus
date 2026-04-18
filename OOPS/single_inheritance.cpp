#include<bits/stdc++.h>
using namespace std;
class human{
    protected:
        string name;
        int age;
};

class student : public human{
    public:
        int roll_no,fees;
    public:
        student(string name,int age,int roll_no,int fees){
            this->name=name;
            this->age=age;
            this->roll_no=roll_no;
            this->fees=fees;
        }
        void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<" ",<<fees;

        }
};

int main(){
    student d("Deependra Chechi",20,112,10000);
    d.display();
    return 0;
}
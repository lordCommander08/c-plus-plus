#include<bits/stdc++.h>
using namespace std;
class human{
    public:
        string name;
    virtual void display(){
        cout<<"My name is: "<<name<<endl;
    }
    human(){

    };
};

class youtuber: virtual public human{
    public:
        int subscriber;
    void display(){
        human:: display();
        cout<<"No. of subscriber: "<<subscriber<<endl;
    }
    youtuber(){

    };
};

class engineer: virtual public youtuber{
    public:
        string branch;
    void display(){
        youtuber::display();
        cout<<"course in engineering: "<<branch<<endl;
    }
    engineer(){

    };
};

class personal: virtual public engineer{
    public:
        string mob_no;

    personal(string name,int subscriber,string branch,string mob_no){
        this->name=name;
        this->subscriber=subscriber;
        this->branch=branch;
        this->mob_no=mob_no;
    }
    personal(){

    };

    void display(){
        engineer::display();
        cout<<"mobile_no is: "<<mob_no<<endl;
    }
};

int main(){
    human *h;
    personal a("Deependra",12982,"CSE","9720209888");
    h = &a;
    h->display();
    return 0;
}
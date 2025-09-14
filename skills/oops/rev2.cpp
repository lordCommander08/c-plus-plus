// // #include<iostream>
// // using namespace std;
// // class student{
// // public:
// //     student(string n,string g,string a){
// //     name=n;
// //     grade=g;
// //     age=a;
// //     }
// //     string name;
// //     string grade;
// //     string age;
// //     void getinfo()
// //     {
// //         cout<<"Name:"<<name<<endl;
// //         cout<<"Grade:"<<grade<<endl;
// //         cout<<"Age:"<<age<<endl;
// //     }
// // };
// // int main()
// // {
// //     student deependra("Deependra Singh","Section-B","18");
// //     deependra.getinfo();
// // }

// // #include<iostream>
// // using namespace std;
// // class mine{
// // public:
// // mine(string n,string a,string g)
// // {
// //     name=n;
// //     address=a;
// //     grade=g;
// // }
// // string name;
// // string address;
// // string grade;
// // void getinfo()
// // {
// //     cout<<"NAME:"<<name<<endl;
// //     cout<<"ADDRESS:"<<address<<endl;
// //     cout<<"GRADE:"<<grade;
// // }
// // };
// // int main()
// // {
// //     mine data("Deependra Singh","Agra","D");
// //     data.getinfo();
// //     return 0;
// // }

// //****compile time polymorphism using two same function****//

// #include<iostream>
// #include<string>
// using namespace std;
// class print
// {
// public:
// void show(int x)
// {
// cout<<"int:"<<x<<endl;
// }
// void show(char ch)
// {
//     cout<<"character:"<<ch<<endl;
// }
// void show(string s)
// {
//     cout<<"string:"<<s<<endl;
// }
// };
// int main(){
//     print deep;
//     deep.show("Ram");
//     deep.show(23);
//     deep.show('5');
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class shape{//abstract class
//  public:   
//  virtual void draw()=0;//pure virtual function
//  };
// class circle:public shape{
//     public:
//     void draw(){
//         cout<<"Drawing a Circle\n";
//     }
// };
// int main()
// {
// // shape c; it doesn't work because it is a abstract class
// circle c;
// c.draw();
// return 0;
// }

//**********using pointer********/
#include<iostream>
using namespace std;
class Student{
public: 
    Student(string n,int m,float perc){
        name=n;
        marks=m;
        percentage=perc;
    }
    string name;
    int marks;
    float percentage;
};
 void change(Student &s){
        s.name="Shivam";
    }
int main()
{
    Student s("Deependra singh",99,80.9);
    cout<<s.name<<endl;
    // change(s);
    Student* ptr = &s;
    (*ptr).name="shivam";
    cout<<ptr<<endl;
    cout<<s.name<<endl;
}    
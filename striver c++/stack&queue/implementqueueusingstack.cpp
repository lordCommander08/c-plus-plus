#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> s1,s2;
    public:
     void push(int x){
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
     }
     int pop(){
        if(s1.empty()) return -1;
        int val = s1.top();
        s1.pop();
        return val;
     }
     int top(){
        if(s1.empty()){
            cout<<"empty Queue \n";
            return -1;
        }
        return s1.top();
     }
     void print(){
        stack<int> temp = s1;
        cout<<"queue elements are: ";
        while(temp.size()){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
     }
};
int main(){
    Queue q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    cout << "Popped: " << q.pop() << endl;
    cout << "Popped: " << q.pop() << endl;
    cout << "Popped: " << q.pop() << endl;
    cout<<"front element "<< q.top()<<endl;
    q.push(69);
    q.print();
}
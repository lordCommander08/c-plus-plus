#include<bits/stdc++.h>
using namespace std;
class Area{
    public:
        int calculate_area(int r){
            return 3.14*r*r;
        }
        int calculate_area(int l,int b){
            return l*b;
        }
};

int main(){
    Area a;
    cout<<a.calculate_area(4,3);
}
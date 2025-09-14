#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout<<"size: "<<vec.size()<<endl;
    vec.push_back(23);
    vec.push_back(24);
    vec.push_back(25);
    vec.push_back(26);
    vec.push_back(27);
    cout<<"size after the operation: "<<vec.size()<<endl;
    for(int value: vec)
    //for each loop 
    {
        cout<<value<<endl;
    }
    return 0;
}
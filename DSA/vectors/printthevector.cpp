#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<char> vec={'d','s','g'}; // vector<int> vec(4,2);
   cout<<"size: "<<vec.size()<<endl;
    for(char value :vec)
    {
        cout<< value <<endl;
    }
    return 0;
}
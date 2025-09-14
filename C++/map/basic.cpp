#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m.insert({1,"Deependra Chechi"});
    m.insert({3,"Chirag Baniyaah"});
    m.insert({3,"Darpan Pawar"});
    // for(auto &pair : m){
    //     cout << pair.first<<":"<<pair.second<<endl;
    // }
//    auto it =  m.find(2);
//    cout<<(*it).first<<":"<<(*it).second<<endl;
    // m.erase(3);
    m.clear();
    cout<<m.size()<<endl;
    for(auto &pair : m){
        cout<<pair.first<<": "<<pair.second<<endl;
    }
  return 0;
}
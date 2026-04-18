#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans={1,2,3};
    next_permutation(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int totalFruit(vector<int>& fruits) {
    int n=fruits.size();
    unordered_map<int,int> count;
    int l=0,maxf=0;
    for(int r=0;r<n;r++){
        count[fruits[r]]++;
        while(count.size()>2){
            count[fruits[l]]--;
            if(count[fruits[l]]==0){
                count.erase(fruits[l]);
            }
            l++;
        }
        maxf=max(maxf,r-l+1);
    }
    return maxf;
}
int main(){
    vector<int> fruits={3,3,3,1,2,1,1,2,3,3,4};
    cout<<totalFruit(fruits);
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    int n = arr.size();
    // set<vector<int>> st;
    // int n = arr.size();
    // for(int i=0;i<n;i++){
    //     set<int> hashset;
    //     for(int j=i+1;j<n;j++){
    //         int third=-(arr[i]+arr[j]);
    //         if(arr[i]+arr[j]+third == 0){
    //             vector<int> temp={arr[i],arr[j],third};
    //             sort(temp.begin(),temp.end());
    //             st.insert(temp);
    //         }
    //         hashset.insert(arr[j]);
    //     }
    // }
    // for(auto& v : st)
    //     ans.push_back(v);
    // for(auto it:ans){
    //     for(int x:it){
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1,k=n-1;
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum<0) j++;
            else if(sum>0) k--;
            else{
                vector<int> temp={arr[i],arr[j],arr[k]};
                ans.push_back(temp);
                j++,k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
            }
        }
    }
    for(auto it:ans){
        for(int x:it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
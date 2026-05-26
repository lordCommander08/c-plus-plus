#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,0,-1,0,-2,2};
    set<vector<int>> st;
    int n = arr.size();
    int target=2;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         for(int k = 0; k < n ;k++){
    //             for(int l=0;l<n;l++){
    //                 if(arr[i]+arr[j]+arr[k]+arr[l]==0){
    //                     vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
    //                     sort(temp.begin(),temp.end());
    //                     st.insert(temp);
    //                 }
    //             }
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         set<int> hashset;
    //         for(int k=j+1;k<n;k++){
    //             long long fourth=target-(arr[i]+arr[j]+arr[k]);
    //             if(hashset.find(fourth)!=hashset.end()){
    //                 vector<int> temp={arr[i],arr[j],arr[k],fourth};
    //                 sort(temp.begin(),temp.end());
    //                 st.insert(temp);
    //             }
    //             hashset.insert(arr[k]);
    //         }
    //     }
    // }
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
            for(int j=i+1;j<n;j++){
                if(j!=i+1 && arr[j]==arr[j-1]) continue;
                int k=j+1,l=n-1;
                while(k<l){
                    long long sum=arr[i]+arr[j]+arr[k]+arr[l];
                    if(sum==target){
                        vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.begin());
                        st.insert(temp);
                        k++,l--;
                        while(k<l && arr[k]==arr[k-1])k++;
                        while(k<l && arr[l]==arr[l+1])l--;
                    }
                    else if(sum < target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    for(auto it:ans){
        for(int x : it){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
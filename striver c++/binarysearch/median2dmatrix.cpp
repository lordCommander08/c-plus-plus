#include<bits/stdc++.h>
using namespace std;
int findMedian(vector<vector<int>> &mat){
    int n=mat.size();
    int m=mat[0].size();
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp.push_back(mat[i][j]);
        }
    }
    sort(temp.begin(),temp.end());
    int low=0,high=(n*m)-1;
    while(low<=high){
        if((n*m)%2!=0){
            int mid=(low+high)/2;
            return temp[mid];
        }
    }
    return -1;
}
int main(){
    cout<<"Median Of The Sorted Odd Size Matrix"<<endl;
    vector<vector<int>> mat={{1,5,7,9,11},{2,3,4,5,10},{9,10,12,14,16}};
    int median=findMedian(mat);
    cout<<median;
    return 0;
}
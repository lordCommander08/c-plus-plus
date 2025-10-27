#include<bits/stdc++.h>
using namespace std;
int findCelebrity(vector<vector<int>> &mat){
    // brute Approach
//     int n=mat.size();
//     vector<int> knowme(n);
//     vector<int> iknow(n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(mat[i][j]==1){
//             knowme[j]++;
//             iknow[i]++;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(knowme[i]==n-1 && iknow[i]==0){
//             return i;
//         }
//     }
//     return -1;
 
//  optimal Approach
int n=mat.size();
int top=0;
int bottom=n-1;
while(top<bottom){
    if(mat[top][bottom]==1){
        top++;
    }
    else bottom--;
}
if(top>bottom) return -1;
int celeb=top;
for(int i=0;i<n;i++){
    if(i==celeb) continue;
    else if(mat[celeb][i]==1 || mat[i][celeb]==0) return -1;
}
return top;
 }
int main(){
    vector<vector<int>> mat={
        {0,1,1,0},
        {0,0,0,0},
        {0,1,0,0},
        {1,1,0,0}
    };
    cout<<findCelebrity(mat);
    return 0;
}
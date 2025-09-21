#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int start, int end) {
    int pivot = arr[end];
    int pos = start; 
    for (int i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    swap(arr[pos], arr[end]); 
    return pos;
}
void quicksort(vector<int> &nums,int start,int end){
    if(start>=end) return;
    int pivot=partition(nums,start,end);
    quicksort(nums,start,pivot-1);
    quicksort(nums,pivot+1,end);
}
int main(){
    vector<int> nums={9,7,6,8,5,3,4,1,2};
    quicksort(nums,0,nums.size()-1);
    for(int x: nums) cout<<x<<" ";
    cout<<endl;
    return 0;
}
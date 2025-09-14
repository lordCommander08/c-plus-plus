#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[5]={1,-3,33,-10,21};
    int maxsum=0;
    int currsum=0;
    for(int i=0;i<n;i++)
    {
        currsum=currsum+arr[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0)
        {
        currsum=0;
        }
    }
    cout<<"subarray sum: "<<maxsum<<endl;
}

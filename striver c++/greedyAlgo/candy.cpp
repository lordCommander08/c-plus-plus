#include<bits/stdc++.h>
using namespace std;
int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> left(n, 1);
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1])
                left[i] = left[i - 1] + 1;
        }
        int right = 1, sum = left[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1])
                right++;
            else
                right = 1;

            sum += max(left[i], right);
        }

        return sum;
    }
int main(){
    vector<int> ratings={0,2,4,3,2,1,1,3,5,6,4,0,0};
    cout<<candy(ratings);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
string convert(int num){
    if(num == 0) return "0";
    string ans = "";
    while(num > 0){
        ans += (num % 2 == 0 ? '0' : '1');
        num /= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cout << "Enter a number = ";
    cin >> n;

    string x = convert(n);
    cout << "Binary form = " << x << endl;

    int b = 1 << 2;
    if((n & b) != 0){
        cout << "Bit is set" << endl;
    }
    else{
        cout << "Not set" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q;

public:
    void push(int x) {
        q.push(x);
        int size = q.size();
        // Rotate the queue to make x the front
        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Popped: " << q.front() << "\n";
        q.pop();
    }

    int top() {
        if (q.empty()) return -1;
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top: " << st.top() << "\n"; // 30
    st.pop(); // removes 30
    cout << "Top: " << st.top() << "\n"; // 20
}
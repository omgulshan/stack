#include <bits/stdc++.h>
using namespace std;

class MyStack {
    int *arr;
    int nextindex;
    int capacity;

public:
    MyStack() {
        capacity = 4;
        arr = new int[4];
        nextindex = 0;
    }

    MyStack(int cap) {
        capacity = cap;
        arr = new int[capacity];
        nextindex = 0;
    }

    ~MyStack() {
        delete[] arr;
    }

    int size() {
        return nextindex;
    }

    bool is_empty() {
        return (nextindex == 0);
    }

    void push(int num) {
        if (nextindex == capacity) {
            cout << "Sorry! More elements can't be added to the stack." << endl;
            return;
        }
        arr[nextindex] = num;
        nextindex++;
    }

    void pop() {
        if (is_empty()) {
            cout << "Stack is empty. No element to pop." << endl;
            return;
        }
        nextindex--;
    }
};

int main() {
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.size() << endl;

    return 0;
}

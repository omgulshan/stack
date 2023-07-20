#include <bits/stdc++.h>
using namespace std;

class Stack {
    int *arr;
    int next_index;
    int capacity;
public:
    Stack() {
        capacity = 10; // Default capacity
        arr = new int[capacity];
        next_index = 0;
    }
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        next_index = 0;
    }
    int size() {
        return next_index;
    }
    bool is_empty() {
        return size() == 0;
    }
    void push_element(int ele) {
        if (next_index == capacity) {
            cout << "Stack is full." << endl;
            return;
        }
        arr[next_index] = ele;
        next_index++;
    }
    void pop_element() {
        if (is_empty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        next_index--;
    }
    int top() {
        if (is_empty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[next_index - 1];
    }
};

int main() {
    Stack s(5);
    s.push_element(10);
    s.push_element(20);
    s.push_element(30);
    s.push_element(40);
    s.push_element(50);
    cout << "The size of the stack is: " << s.size() << endl;
    return 0;
}

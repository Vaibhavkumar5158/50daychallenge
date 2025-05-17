#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> input;
    stack<int> output;

    // Helper to move elements from input to output
    void transferIfNeeded() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    }

public:
    MyQueue() {
        // Constructor
    }

    void push(int x) {
        input.push(x);
    }

    int pop() {
        transferIfNeeded();
        int front = output.top();
        output.pop();
        return front;
    }

    int peek() {
        transferIfNeeded();
        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
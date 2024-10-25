#include <stack>
using namespace std;

class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int res = 0;
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        res = s2.top();
        s2.pop();
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return res;
    }
    
    int peek() {
        int res = 0;
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        res = s2.top();
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
        return res;
    }
    
    bool empty() {
        return s1.empty();
    }
private:
    stack<int> s1, s2;
};
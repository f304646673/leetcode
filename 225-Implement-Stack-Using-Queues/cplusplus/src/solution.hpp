#include <queue>
using namespace std;

class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int result = q1.front();
        q1 = q2;
        q2 = queue<int>();
        return result;
    }
    
    int top() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int result = q1.front();
        q2.push(result);
        q1 = q2;
        q2 = queue<int>();
        return result;
    }
    
    bool empty() {
        return q1.empty();
    }

private:
    queue<int> q1;
    queue<int> q2;
};

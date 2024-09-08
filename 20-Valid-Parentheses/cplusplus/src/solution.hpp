#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        for(char ch : s) {
            if(ch == '(' || ch == '[' || ch == '{') {
                charStack.push(ch);
            } else {
                if (charStack.empty()) {
                    return false;
                }
                char topChar = charStack.top();
                if ((ch == ')' && topChar != '(') || 
                    (ch == ']' && topChar != '[') || 
                    (ch == '}' && topChar != '{')) {
                    return false;
                }
                charStack.pop();
            }
        }
        return charStack.empty();
    }
};
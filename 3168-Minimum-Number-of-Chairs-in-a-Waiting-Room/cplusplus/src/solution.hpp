#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int maxChairs = 0;
        stack<int> chairs;
        for (char c : s) {
            if (c == 'L') {
                chairs.pop();
            } else {
                chairs.push(1);
                maxChairs = max(maxChairs, (int)chairs.size());
            }
        }
        return maxChairs;
    }
};
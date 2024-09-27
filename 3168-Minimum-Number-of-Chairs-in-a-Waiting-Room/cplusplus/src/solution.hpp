#include <string>
using namespace std;

class Solution {
public:
    int minimumChairs(string s) {
        int maxChairs = 0;
        int person = 0;
        for (char c : s) {
            if (c == 'L') {
                person--;
            } else {
                person++;
                maxChairs = max(maxChairs, person);
            }
        }
        return maxChairs;
    }
};
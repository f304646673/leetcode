#include <set>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while (n != 1) {
            if (s.find(n) != s.end()) {
                return false;
            }
            s.insert(n);
            int sum = 0;
            for (int c = n % 10; n != 0; n /= 10, c = n % 10) {
                sum += c * c;
            }
            n = sum;
        }
        return true;
    }
};
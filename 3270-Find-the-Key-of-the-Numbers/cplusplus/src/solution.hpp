#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int result = 0;
        for (int i = 0; i < 4; i++) {
            result += min(min(num1 % 10, num2 % 10), num3 % 10) * pow(10, i);
            num1 /= 10;
            num2 /= 10;
            num3 /= 10;
        }
        return result;
    }
};
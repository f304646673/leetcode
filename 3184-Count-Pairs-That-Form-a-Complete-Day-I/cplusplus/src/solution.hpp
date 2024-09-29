#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> m;
        for (int hour : hours) {
            m[hour%24]++;
        }
        int result = m[0] * (m[0] - 1) / 2 + m[12] * (m[12] - 1) / 2;

        for (int i = 1; i < 12; i++) {
            result += m[i] * m[24 - i];
        }

        return result;
    }
};
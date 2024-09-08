#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        const unordered_map<char, int> roman_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int result = 0;
        int previous_value = 0;
        for (char c : s) {
            int current_value = roman_map.at(c);
            if (previous_value < current_value) {
                result -= previous_value;
            } else {
                result += previous_value;
            }
            previous_value = current_value;
        }
        result += previous_value;
        return result;
    }
};
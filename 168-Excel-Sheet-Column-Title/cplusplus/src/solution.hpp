#include <string>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        int base = 26;

        while (columnNumber > 0) {
            columnNumber--;
            result = char('A' + columnNumber % base) + result;
            columnNumber = columnNumber / base;
        }

        return result;
    }
};
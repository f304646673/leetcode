#include <string>
using namespace std;

class Solution {
public:
    string convertDateToBinary(string date) {
       return toBinary(stoi(date.substr(0, 4))) + "-" + toBinary(stoi(date.substr(5, 2))) + "-" + toBinary(stoi(date.substr(8, 2)));
    }

private:
    string toBinary(int num) {
        string result = "";
        while (num > 0) {
            if (num & 1) {
                result = "1" + result;
            } else {
                result = "0" + result;
            }
            num >>= 1;
        }
        return result;
    }
};

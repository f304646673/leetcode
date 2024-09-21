#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int result = 0;
        for (string& command : commands) {
            if (command == "LEFT") {
                result -= 1;
            } else if (command == "RIGHT") {
                result += 1;
            } else if (command == "DOWN") {
                result += n;
            } else if (command == "UP") {
                result -= n;
            }
        }
        return result;
    }
};
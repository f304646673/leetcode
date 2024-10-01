#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for (int i = 0; i < grid.size() - 1; i++) {
            for (int j = 0; j < grid[0].size() - 1; j++) {
                int count = 0;
                if (grid[i][j] == 'B') {
                    count++;
                }
                if (grid[i][j + 1] == 'B') {
                    count++;
                }
                if (grid[i + 1][j] == 'B') {
                    count++;
                }
                if (grid[i + 1][j + 1] == 'B') {
                    count++;
                }

                if (count != 2) {
                    cout << count <<endl;
                    return true;
                }
            }
        }
        return false;
    }
};
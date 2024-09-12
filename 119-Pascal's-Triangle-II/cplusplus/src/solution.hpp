#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1, 1);
        for (int i = 1; i < rowIndex; i++) {
            unsigned long long tmp = result[i - 1];
            tmp *= (rowIndex - i + 1);
            tmp /= i;
            result[i] = tmp;
        }
        return result;
    }

    vector<int> getRow1(int rowIndex) {
        vector<int> result(rowIndex + 1, 1);
        for (int i = 1; i < rowIndex; i++) {
            for (int j = i; j > 0; j--) {
                result[j] += result[j-1];
            }
        }
        return result;
    }

    vector<int> getRow2(int rowIndex) {
        vector<int> result(rowIndex + 1, 1);
        for (int i = 1; i < rowIndex; i++) {
            result[i] = num(rowIndex, i);
        }
        return result;
    }
private:

    int num(int n, int m) {
        if (m > n) return 0;
        if (m == 0) return 1;
        if (n == 0) return 1;
        return num(n-1, m-1) + num(n-1, m);
    }
};
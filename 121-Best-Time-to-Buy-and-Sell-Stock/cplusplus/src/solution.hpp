#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int a: prices) {
            if (minPrice > a) {
                minPrice = a;
            } else {
                maxProfit = max(maxProfit, a - minPrice);
            }
        }
        return maxProfit;
    }
};
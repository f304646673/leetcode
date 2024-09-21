class Solution {
public:
    int minChanges(int n, int k) {
        int result = 0;
        unsigned int unsignedk = k;
        unsigned int mask = n ^ k;
        if ((mask & unsignedk) != 0) {
            return -1;
        } 
        return __builtin_popcount(mask);
    }
};
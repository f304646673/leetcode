#include <string>
#include <bitset>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        bitset<26> uppercase = bitset<26>(0);
        bitset<26> lowercase = bitset<26>(0);

        for (char c : word) {
            if (isupper(c)) {
                uppercase.set(c - 'A');
            } else if (islower(c)) {
                lowercase.set(c - 'a');
            }
        }

        bitset<26> all = uppercase & lowercase;
        return all.count();
    }
};
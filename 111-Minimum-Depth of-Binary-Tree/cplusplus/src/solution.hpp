#include <algorithm>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        int currentMinDepth = INT_MAX;
        return minDepthDfs(root, 0, currentMinDepth);
    }

private:
    int minDepthDfs(TreeNode* root, int depth, int currentMinDepth) {
        if (root == nullptr) return depth;

        depth++;

        if (depth >= currentMinDepth) return depth;

        if (root->left == nullptr && root->right == nullptr) return depth;

        if (root->left != nullptr) {
            currentMinDepth = min(currentMinDepth, minDepthDfs(root->left, depth, currentMinDepth));
        }

        if (root->right != nullptr) {
            currentMinDepth = min(currentMinDepth, minDepthDfs(root->right, depth, currentMinDepth));
        }

        return currentMinDepth;
    }

// private:
//     int minDepthDfs(TreeNode* root) {
//         if (root == nullptr) return INT_MAX;
//         if (root->left == nullptr && root->right == nullptr) return 1;
//         return 1 + min(minDepthDfs(root->left), minDepthDfs(root->right));
//     }
};
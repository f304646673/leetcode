#include <vector>
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorderTraversalDfs(root, result);
        return result;    
    }

private:
    void postorderTraversalDfs(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        postorderTraversalDfs(root->left, result);
        postorderTraversalDfs(root->right, result);
        result.push_back(root->val);
    }
};
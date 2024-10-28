#include <vector>
#include <string>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        string path;
        dfs(root, path, res);
        return res;
    }

private:
    void dfs(TreeNode* root, string path, vector<string>& res) {
        if (root == nullptr) {
            return;
        }

        if (path.empty()) {
            path += to_string(root->val);
        } else {
            path += "->" + to_string(root->val);
        }

        if (root->left == nullptr && root->right == nullptr) {
            res.push_back(path);
            return;
        }
       
        dfs(root->left, path, res);
        dfs(root->right, path, res);
        return;
    }
};
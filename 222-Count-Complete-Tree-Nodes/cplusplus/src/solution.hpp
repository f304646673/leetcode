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
    int countNodes(TreeNode* root) {
        int fullRightDepth = 0;
        TreeNode* cur = root;
        while (cur != nullptr) {
            fullRightDepth++;
            cur = cur->right;
        }
        int count = 0;
        countLastLevel(root, 1, fullRightDepth, count);
        return (1 << fullRightDepth) - 1 + count;
    }

private:
    bool countLastLevel(TreeNode* root, int depth, int fullRightDepth, int& count) {
        if (root == nullptr) {
            return false;
        }
        
        if (depth == fullRightDepth) {
            if (root->left != nullptr) {
                count++;
            }
            if (root->right != nullptr) {
                count++;
            }
            if (root->left == nullptr && root->right == nullptr) {
                return false;
            }
            return true;
        } else {
            if ( 0 == countLastLevel(root->left, depth + 1, fullRightDepth, count)
                || 0 == countLastLevel(root->right, depth + 1, fullRightDepth, count)) {
                return false;
            }
            return true;
        }
    }
};
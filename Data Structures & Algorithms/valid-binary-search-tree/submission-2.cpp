/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root->left == NULL && root->right == NULL) return true;
        return helper(root->left, INT_MIN, root->val) && helper(root->right, root->val, INT_MAX);
    }
    bool helper(TreeNode* root, int low, int high){
        if(root == NULL) return true;
        if(root->val < high && root->val > low){
            return helper(root->left, low, root->val) && helper(root->right, root->val, high);;
        }
        return false;
    }
};

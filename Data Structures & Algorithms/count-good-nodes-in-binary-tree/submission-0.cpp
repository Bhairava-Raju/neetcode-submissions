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
    int goodNodes(TreeNode* root) {
        if(root == NULL) return 0;
        int ct = 0;
        int big = INT_MIN;
        helper(root, ct, big);
        return ct;
    }
    void helper(TreeNode* root, int &ct, int big){
        if(root == NULL) return;
        if(root->val >= big){
            big = root->val;
            ct++;
        }
        helper(root->right, ct, big);
        helper(root->left, ct, big);
    }
};

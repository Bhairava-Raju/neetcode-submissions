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
    int maxPathSum(TreeNode* root) {
        int max_sum = INT_MIN;
        helper(root, max_sum);
        return max_sum;
    }
    int helper(TreeNode* root, int &max_sum){
        if(root == NULL) return 0;
        int ls = max(0, helper(root->left, max_sum));
        int rs = max(0, helper(root->right, max_sum));
        max_sum = max(max_sum, ls + rs + root->val);
        return max(0, root->val + max(ls, rs));
    }
};

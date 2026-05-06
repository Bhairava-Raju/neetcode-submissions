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
        int maxi = INT_MIN;
        asd(root, maxi);
        return maxi;
    }
    int asd(TreeNode* node, int &maxi){
        if(node == NULL) return 0;
        int lh = max(0, asd(node->left, maxi));
        int rh = max(0, asd(node->right, maxi));
        int sum =  node->val + lh + rh;
        maxi = max(maxi, sum);
        return node->val + max(lh, rh);
    }
};

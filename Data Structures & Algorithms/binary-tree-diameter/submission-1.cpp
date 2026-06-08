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
    int dia = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        max(helper(root, dia)-1, dia);
        return dia;
    }
    int helper(TreeNode* root, int &dia){
        if(root == NULL) return 0;
        int left = helper(root->left, dia);
        int right = helper(root->right, dia);
        dia = max(dia, left + right);
        return 1 + max(left, right);
    }
};

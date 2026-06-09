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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       return helper(preorder, inorder, 0, preorder.size()-1, 0, inorder.size()-1); 
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int inL, int inR, int preL, int preR){
        if(inR < inL || inL > inR) return NULL;
        TreeNode* root = new TreeNode(preorder[preL]);
        int inroot;
        for(int i=inL; i<=inR; i++){
            if(inorder[i] == root->val) inroot = i;
        }
        root->left = helper(preorder, inorder, inL, inroot-1, preL+1, preL+1+(inroot-1-inL));
        root->right = helper(preorder, inorder, inroot+1, inR, preL+2+(inroot-1-inL), preR);
        return root;
    }
};

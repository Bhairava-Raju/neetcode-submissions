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
    bool ans = false;
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(root == NULL || subRoot == NULL) return false;
        return pre(root, subRoot);
    }
    bool pre(TreeNode* root, TreeNode* subRoot){
        if(root == NULL) return false;
        if(root->val == subRoot->val && check(root, subRoot)) return true;
        return pre(root->left, subRoot) || pre(root->right, subRoot);;
    }
    bool check(TreeNode* p, TreeNode* q){
        if(p == NULL && q == NULL) return true;
        else if(p == NULL || q == NULL) return false;
        if(p->val != q->val) return false;
        bool left = check(p->left, q->left);
        if(left == false) return false;
        bool right = check(p->right, q->right);
        if(right == false) return false;
        return true;
    }
};

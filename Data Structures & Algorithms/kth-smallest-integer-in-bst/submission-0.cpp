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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> v;
        io(root, v);
        if(v.size() == 0) return 0;
        return v[k - 1];
    }
    void io(TreeNode* node, vector<int>& v){
        if(node == NULL) return;
        io(node->left, v);
        v.push_back(node->val);
        io(node->right, v);
    }
};

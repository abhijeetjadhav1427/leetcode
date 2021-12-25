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
    int i=0;
    unordered_map<int, int> m;
    TreeNode *solve(vector<int> &post, int s, int e)
    {
        if (s > e) return NULL;
        
        TreeNode *root = new TreeNode(post[i--]);

        int pos = m[root->val];
        
        root->right = solve(post, pos + 1, e);
        root->left = solve(post, s, pos - 1);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for (int i = 0; i < inorder.size(); i++)
        {
            m[inorder[i]] = i;
        }
        i=postorder.size()-1;
        return solve(postorder, 0, inorder.size() - 1);
    }
};
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
    int index = 0;
    unordered_map<int, int> m;
    TreeNode *solve(vector<int> &pre, int s, int e)
    {
        if (s > e)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(pre[index]);
        index++;
        int key_index = m[root->val];
        root->left = solve(pre, s, key_index - 1);
        root->right = solve(pre, key_index + 1, e);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++)
        {
            m[inorder[i]] = i;
        }
        return solve(preorder, 0, inorder.size() - 1);
    }
};
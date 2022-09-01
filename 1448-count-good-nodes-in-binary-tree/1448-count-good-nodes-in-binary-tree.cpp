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

    int find(TreeNode*root,int maxp){
        return root?find(root->left,max(maxp,root->val))+find(root->right,max(maxp,root->val)) + (root->val >= maxp) : 0;
    }
    int goodNodes(TreeNode* root) {
     // good node -> root to node, no value greater than node
        // return count
       // node x,
        // if(root == NULL) return 0;
        // int count = 1;;
        // count += find(root,root->left);
        // count += find(root,root->right);
        return find(root,-10000);
    }
};
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
    vector<int>path;
    void solve(TreeNode*root,int targetSum,vector<vector<int>>&ans,int sum){
       if(!root) return;
        sum+=root->val;
        path.push_back(root->val);
        if(sum == targetSum && !root->left && !root->right)
            ans.push_back(path);
        solve(root->left,targetSum,ans,sum);
        solve(root->right,targetSum,ans,sum);
       path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        // start from root, till leaf, sum+root->val>targetsum
        // greater, leaf nodes or still it is less, 
        //equal
        vector<vector<int>> ans;
        solve(root,targetSum,ans,0);
        return ans;
    }
};
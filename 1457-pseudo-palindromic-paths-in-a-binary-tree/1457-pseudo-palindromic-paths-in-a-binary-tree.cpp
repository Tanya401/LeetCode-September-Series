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
    int ans = 0;
    void find(TreeNode*root,map<int,int>&mp,int odd){
        if(root == NULL)
            return;
        mp[root->val]++;
        if(mp[root->val]%2==0) odd--;
        else
        odd++;
        find(root->left,mp,odd);
        find(root->right,mp,odd);
        mp[root->val]--;
        if(!root->left && !root->right && odd<2) ans++;
}
    int pseudoPalindromicPaths (TreeNode* root) {
     int count = 0;
        map<int,int> mp;
     find(root,mp,0);
        return ans;
    }
};
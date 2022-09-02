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
    //BFS,queue
    vector<double> averageOfLevels(TreeNode* root) {
       vector<double> ans;
      queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<double> temp;
            while(size--){
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                    }
            int n = temp.size();
            double sum = 0;
            for(int i=0;i<n;i++){
                sum += temp[i];
            }
            sum = sum/n;
            ans.push_back(sum);
            }
        return ans;
    }
};
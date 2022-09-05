/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            while(size--){
                Node*node = q.front();
                q.pop();
              temp.push_back(node->val);
                for(auto x:node->children)
                  q.push(x);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
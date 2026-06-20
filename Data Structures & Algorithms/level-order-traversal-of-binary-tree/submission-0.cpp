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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> lvl;
            int sz = q.size();

            while(sz--){
                TreeNode* node = q.front();
                q.pop();
                if(node){
                    lvl.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
            }
            if(!lvl.empty())
            ans.push_back(lvl);
        }

        return ans;
    }
};

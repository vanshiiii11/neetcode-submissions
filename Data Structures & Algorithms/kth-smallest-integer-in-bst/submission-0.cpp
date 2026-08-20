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
        vector <int>ans;
        if(root==NULL)return 0;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            root=st.top();
            st.pop();
            
            if(root->right!=NULL)st.push(root->right);
            ans.push_back(root->val);
            if(root->left!=NULL)st.push(root->left);
            
       }
       sort(ans.begin(),ans.end());
       return ans[k-1];
    }
};

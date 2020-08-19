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
    int ans=0;
    unordered_map<int,int>m;
    int ct=0;
    
    int res = 0, sum;
    unordered_map<int, int> seen;
    void dfs(TreeNode* root, int partialSum = 0) {
        
        if(!root)
            return;
        
        partialSum += root->val;
        
        res += seen[partialSum - sum];
        
        seen[partialSum]++;
        
        if (root->left) dfs(root->left, partialSum);
        if (root->right) dfs(root->right, partialSum);
        
        seen[partialSum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        sum = targetSum;
        
        seen[0] = 1;
        if (!root) return res;
        dfs(root);
        return res;
    }
};

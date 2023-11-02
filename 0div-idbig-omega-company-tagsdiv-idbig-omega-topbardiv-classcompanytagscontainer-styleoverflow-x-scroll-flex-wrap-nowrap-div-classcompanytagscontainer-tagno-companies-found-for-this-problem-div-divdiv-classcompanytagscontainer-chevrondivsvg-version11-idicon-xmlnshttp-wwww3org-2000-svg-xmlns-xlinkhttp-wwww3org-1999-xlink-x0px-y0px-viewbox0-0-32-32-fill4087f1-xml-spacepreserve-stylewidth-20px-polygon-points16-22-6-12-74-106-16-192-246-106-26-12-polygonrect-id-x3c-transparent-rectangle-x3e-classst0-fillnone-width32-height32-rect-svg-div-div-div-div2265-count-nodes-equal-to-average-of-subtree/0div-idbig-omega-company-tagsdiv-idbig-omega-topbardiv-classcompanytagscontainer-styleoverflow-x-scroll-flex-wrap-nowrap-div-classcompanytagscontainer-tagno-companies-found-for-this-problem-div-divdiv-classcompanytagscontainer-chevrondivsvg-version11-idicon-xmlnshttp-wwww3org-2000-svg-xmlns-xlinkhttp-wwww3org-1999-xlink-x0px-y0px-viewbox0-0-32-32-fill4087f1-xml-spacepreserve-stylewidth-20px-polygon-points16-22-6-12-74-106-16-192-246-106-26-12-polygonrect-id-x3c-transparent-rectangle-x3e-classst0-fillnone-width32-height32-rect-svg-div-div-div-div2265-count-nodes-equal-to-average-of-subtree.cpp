class Solution {
public:


    int below(TreeNode* root){
        if(!root)
        return 0;

        return 1+below(root->left)+below(root->right);
    } 

    int solve(TreeNode* &root,int &ans){
        if(!root){
        return 0;
        }

        int s=0;
        s+=solve(root->left,ans);
        // c=0;
        s+=solve(root->right,ans);

        int c = below(root);

        s+=root->val;

        if(s/c == root->val){
        ans++;
        }
        return s;
    }


    int averageOfSubtree(TreeNode* root) {
        if(!root)
        return 0;

        int ans=0;
        solve(root,ans);

        return ans;
    }
};
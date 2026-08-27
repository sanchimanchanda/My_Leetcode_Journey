
class Solution {
public:
int maxsum ;
int solve(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int l = solve(root->left);
    int r = solve(root->right);


    int dono_ache = l+r+root->val;//1
    int koi_ek_acha = max(l,r) +root->val;//2
    int sirf_root_acha = root->val;//3

    maxsum = max({maxsum,dono_ache,koi_ek_acha,sirf_root_acha});

    return max(sirf_root_acha,koi_ek_acha);//very imp why just these two
}
    int maxPathSum(TreeNode* root) {
        maxsum = INT_MIN;
        solve(root);
        return maxsum;
    }
};
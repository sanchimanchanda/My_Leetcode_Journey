
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> result;

        if(root == NULL){
            return result;
        }

        q.push(root);
        //level order traversal

        while(!q.empty()){
            int n = q.size();
            TreeNode* node ;

            while(n--){
                node = q.front();
                q.pop();
                if(node->left != NULL) q.push(node->left);
                if(node->right != NULL) q.push(node->right);
            }
            result.push_back(node->val);
        }
        return result;
    }
};
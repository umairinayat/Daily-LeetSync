// Last updated: 23/12/2025, 00:15:18
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

 
class Solution{
   TreeNode*  min(TreeNode* root){
    if(root == NULL){
        return NULL;
    }
    else if(root->left == NULL){
        return root;
    }
    else{
        return min(root->left);
    }
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL){
            return root;
        }
        if(root->val == key){
            if(root->left == NULL && root->right == NULL ){
                delete root; 
                return NULL;
            }
            if(root->left != NULL && root->right == NULL ){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            if(root->left == NULL && root->right != NULL ){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            if(root->left != NULL && root->right != NULL ){
                 TreeNode* minv = min(root->right);
                 root->val = minv->val;
                 root->right = deleteNode(root->right, minv->val);

                 return root;
            }

            
        }
        else if(root->val > key){
            root->left= deleteNode(root->left, key);
        }
        else{
            root->right= deleteNode(root->right, key);
        }
        return root;
    }
};
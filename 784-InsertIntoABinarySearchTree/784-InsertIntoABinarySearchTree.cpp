// Last updated: 23/12/2025, 00:15:13
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode * newroot = new TreeNode(val);
        if(root == NULL){
            root = newroot;
        }
        else{
            TreeNode * temp =root;
            while(temp!= NULL){
                if(temp->val > val){
                    if(temp ->left == NULL){
                        temp->left = newroot;
                        break;
                    }
                    else{
                        temp = temp->left;
                    }
                }
                else{
                    if(temp->right == NULL){
                        temp->right = newroot;
                        break;
                    }
                    else{
                        temp = temp->right;
                    }
                }
            }
        }
    return root;
    }
    
};
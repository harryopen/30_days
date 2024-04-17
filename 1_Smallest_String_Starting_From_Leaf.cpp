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
    string result   = "";
    void  helper(TreeNode * root , string curr){
        
        if(root == NULL) return ;
        curr = char(root->val + 'a') + curr ;
        //Base condition leaf node 
         if (root->left == NULL && root->right == NULL){

            if(result == "" || result > curr){
                result = curr ;

            }
            return ;
        }
            helper(root->left  , curr ); 
            helper(root->right , curr );
        


    }
    string smallestFromLeaf(TreeNode* root) {

        helper(root, "");
        return result ; 
        
    }
};
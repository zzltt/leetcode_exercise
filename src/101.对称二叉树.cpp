/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        if((root->left != NULL)&&(root->right != NULL)){
            return isSameTree(root->left,root->right);
        }
        if((root->left == NULL)&&(root->right==NULL)){
            return true;
        }
        return false;
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q){
        if((p==NULL)&&(q!= NULL)){
            return false;
        }
        if((p!=NULL)&&(q==NULL)){
            return false;
        }
        if((p!=NULL)&&(q!=NULL)){
            if(p->val != q->val){
                return false;
            }else{
                return (isSameTree(p->left,q->right)&&isSameTree(p->right,q->left));
            }
        }
        return true;
    }
};
// @lc code=end


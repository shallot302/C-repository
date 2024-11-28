class Solution {
public:
    bool checkTree(TreeNode *root) {
        if (root->left == root->right) { // 递归边界：判断 root 是否为叶子节点
            return true;
        }
        return root->val == root->left->val + root->right->val &&
               checkTree(root->left) && checkTree(root->right);
    }
};

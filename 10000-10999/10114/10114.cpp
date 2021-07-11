//https://www.e-olymp.com/ru/problems/10114

TreeNode* Invert(TreeNode *tree)
{
    if(tree == NULL) return tree;

    TreeNode * cur = tree->right;
    tree->right = Invert(tree->left);
    tree->left = Invert(cur);

    return tree;
}
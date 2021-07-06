int maxDepth(TreeNode *tree)
{
    int l = (tree->left != NULL ? maxDepth(tree->left) : 0);
    int r = (tree->right != NULL ? maxDepth(tree->right) : 0);
    return 1 + max(l, r);
}
//https://www.e-olymp.com/ru/problems/10109

int minDepth(TreeNode *tree)
{
    if(tree == NULL)
        return 0;
    if(tree->left == NULL && tree->right == NULL)
        return 1;
    else if(tree->left == NULL)
        return 1 + minDepth(tree->right);
    else if(tree->right == NULL)
        return 1 + minDepth(tree->left);
    else
        return 1 + min(minDepth(tree->left), minDepth(tree->right));
}
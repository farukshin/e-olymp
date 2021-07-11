//https://www.e-olymp.com/ru/problems/10111
int sumLeft(TreeNode *tree)
{
    if(tree == NULL)
        return 0;

    if(tree->left != NULL && tree->left->left == NULL && tree->left->right == NULL)
        return tree->left->val + sumLeft(tree->right);
    else
        return sumLeft(tree->left) + sumLeft(tree->right);
}
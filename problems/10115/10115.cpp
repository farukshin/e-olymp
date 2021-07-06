//https://www.e-olymp.com/ru/problems/10115
bool check(TreeNode *tree1, TreeNode *tree2)
{
    if(tree1 == NULL && tree2 == NULL)
        return true;
    else if(tree1 == NULL || tree2 == NULL)
        return false;
    else
        return (tree1->val == tree2->val) && check(tree1->left, tree2->right) && check(tree1->right, tree2->left);
}

bool isSymmetric(TreeNode *tree)
{
    if(tree == NULL)
        return true;
    else
        return check(tree->left, tree->right);
}
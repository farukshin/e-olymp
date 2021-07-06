//https://www.e-olymp.com/ru/problems/10108

bool isSame(TreeNode *tree1, TreeNode *tree2)
{
    if(tree1 == NULL && tree2 == NULL)
        return true;
    else if (tree1 == NULL || tree2 == NULL)
        return false;

    if(tree1->val == tree2->val)
    {
        bool fl1 = isSame(tree1->left, tree2->left);
        bool fl2 = isSame(tree1->right, tree2->right);
        return fl1 && fl2;
    }
    else
        return false;

}
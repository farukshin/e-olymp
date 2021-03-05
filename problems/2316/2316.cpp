//https://www.e-olymp.com/ru/problems/2316
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Item
{
    int key;
    int val;
    Item * left, * right;
};

Item *addNode (int val)
{
    Item *nnode = new Item[sizeof(Item)];
    nnode->left = NULL;
    nnode->right = NULL;
    nnode->val = val;
    return nnode;
}

Item * addTree (Item * root, int val)
{
    if (root == NULL) root = addNode (val);
    if (val > root->val) if (root->right == NULL) root->right = addNode (val);
        else addTree (root->right, val);
    if (val < root->val) if (root->left == NULL) root->left = addNode (val);
        else addTree (root->left, val);
    return root;

}

void printLeafs (Item *root)
{
    if (root != NULL)
    {
        printLeafs (root->left);
        if (root->left == NULL && root->right == NULL) cout << root->val << " ";
        printLeafs (root->right);
    }
}

int main()
{
    int n;
    cin >> n;
    Item *tree = new Item;
    tree = NULL;
    if (n != 0) tree = addNode (n);
    while (n != 0)
    {
        addTree (tree, n);
        cin >> n;
    }
    printLeafs (tree);
    return 0;
}
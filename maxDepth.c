#include "trees.h"

int maxDepth(struct node* node);
int main(void)
{
    struct node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 0);

    printf("Size of tree is %d\n", maxDepth(root));
    return 0;
}

int maxDepth(struct node* node)
{
    int lval = 0;
    int rval = 0;
    if (node == NULL)
        return 0;

    if (node->left)
        lval = lval + maxDepth(node->left) + 1;

    if (node->right)
        rval += rval + maxDepth(node->right) + 1;

    if (lval > rval)
        return lval;
    else
        return rval;
}



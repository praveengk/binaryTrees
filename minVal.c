#include "trees.h"

int minVal(struct node* node);
int main(void)
{
    struct node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, -10);

    printf("min val of tree is %d\n", minVal(root));
    return 0;
}

int minVal(struct node* node)
{
    if (node->left == NULL)
        return node->data;

    return minVal(node->left);
}



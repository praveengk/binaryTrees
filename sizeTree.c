#include "trees.h"

int sizeTree(struct node* node);
int main(void)
{
    struct node* root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);

    printf("Size of tree is %d\n", sizeTree(root));
    return 0;
}

int sizeTree(struct node* node)
{
    if (node == NULL)
        return 0;
    return (sizeTree(node->left) + sizeTree(node->right) + 1);
}



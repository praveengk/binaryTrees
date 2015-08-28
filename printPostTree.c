#include "trees.h"

void printPostTree(struct node* node);
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

    printPostTree(root);
    return 0;
}

void  printPostTree(struct node* node)
{
    if (node == NULL)
        return ;

    printPostTree(node->left);
    printPostTree(node->right);
    printf("%d ", node->data);
}



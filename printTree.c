#include "trees.h"

void printTree(struct node* node);
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

    printTree(root);
    return 0;
}

void  printTree(struct node* node)
{
    if (node == NULL)
        return ;

    printTree(node->left);
    printf("%d ", node->data);
    printTree(node->right);
}



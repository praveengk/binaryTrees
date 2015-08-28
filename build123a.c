#include "trees.h"

int main(void)
{
    struct node* node = newNode(1);
    struct node* lnode = newNode(2);
    struct node* rnode = newNode(3);
    node->left = lnode;
    node->right = rnode;

    printf("%d %d %d\n", node->data, node->left->data, node->right->data);
    return 0;
}

#include "trees.h"

int main(void)
{
    struct node* node = newNode(1);
    node->left = newNode(2);
    node->right = newNode(3);

    printf("%d %d %d\n", node->data, node->left->data, node->right->data);
    return 0;
}

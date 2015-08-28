#include "trees.h"

int main(void)
{
    struct node* node = NULL;
    node = insert(node, 2);
    node = insert(node, 1);
    node = insert(node, 3);

    printf("%d %d %d\n", node->data, node->left->data, node->right->data);
    return 0;
}

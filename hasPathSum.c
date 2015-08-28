#include "trees.h"

int hasPathSum(struct node* node, int sum);
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

    
    printf("hasPathSum is %d\n", hasPathSum(root, 25));
    return 0;
}

int  hasPathSum(struct node* node, int sum)
{
    if (node == NULL)
        return sum==0;
    else {
        int subSum = sum - node->data;
        return (hasPathSum(node->left, subSum) || 
        hasPathSum(node->right, subSum));
    }
   
    
}



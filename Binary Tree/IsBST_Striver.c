#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createNode(int data)
{
    struct TreeNode *n;                                     // creating a node pointer
    n = (struct TreeNode *)malloc(sizeof(struct TreeNode)); // Allocating memory in the heap
    n->val = data;                                          // Setting the data
    n->left = NULL;                                         // Setting the left and right children to NULL
    n->right = NULL;                                        // Setting the left and right children to NULL
    return n;                                               // Finally returning the created node
}

// Helper function to validate BST.
bool validateBst(struct TreeNode *root, long min, long max)
{
    if (root == NULL)
    {
        return true;
    }

    if (root->val <= min || root->val >= max)
    {
        return false;
    }

    return validateBst(root->left, min, root->val) &&
           validateBst(root->right, root->val, max);
}

int main()
{

    // Constructing the root node - Using Function (Recommended)
    struct TreeNode *p = createNode(5);
    struct TreeNode *p1 = createNode(3);
    struct TreeNode *p2 = createNode(6);
    struct TreeNode *p3 = createNode(1);
    struct TreeNode *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // preOrder(p);
    // printf("\n");
    // postOrder(p);
    // printf("\n");
    // inOrder(p);
    printf("\n");
    // printf("%d", isBST(p));
    if (validateBst(p, LONG_MIN, LONG_MAX))
    {
        printf("The tree is a valid Binary Search Tree (BST).\n");
    }
    else
    {
        printf("The tree is not a valid Binary Search Tree (BST).\n");
    }
    return 0;
}
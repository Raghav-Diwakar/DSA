#include <stdio.h>
#include <stdlib.h>
struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
};
struct Node *MakeNode(int x)
{
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
int height(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;
}
int countLeafNodes(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    return countLeafNodes(root->left) + countLeafNodes(root->right);
}
// complete tree
int Complete(struct node *root)
{
    if (2 * (height(root)) == countLeafNodes(root))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    struct Node *root = NULL;
    // example of complete tree
    root = MakeNode(1);
    root->left = MakeNode(2);
    root->right = MakeNode(3);
    root->left->left = MakeNode(4);
    root->left->right = MakeNode(5);
    root->right->left = MakeNode(6);
    root->right->right = MakeNode(7);

    // example of incomplete root

    // root = MakeNode(2);
    // root->left = MakeNode(4);
    // root->right = MakeNode(6);
    // root->left->left =MakeNode(6);
    // root->left->right =MakeNode(8);
    // root->right->left =MakeNode(10);
    // root->right->right = MakeNode(12);
    // root->right->right->right = MakeNode(14);

    printf("%d\n", height(root));
    printf("%d\n", countLeafNodes(root));

    if (Complete(root) == 1)
        printf("It is a complete tree");
    else
        printf("It is not a complete tree");

    return 0;
}
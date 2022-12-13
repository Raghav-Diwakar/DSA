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
int count_N1_Nodes(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    if (root->left != NULL && root->right != NULL)
    {
        return count_N1_Nodes(root->left) + count_N1_Nodes(root->right);
    }
    return count_N1_Nodes(root->left) + count_N1_Nodes(root->right) + 1;
}
void strictly(struct Node *root)
{
    if (count_N1_Nodes(root) == 0)
    {
        printf("Yes !");
    }
    else
    {
        printf("No ");
    }
}
int main()
{
    struct Node *root = NULL;
    root = MakeNode(1);
    root->left = MakeNode(2);
    root->right = MakeNode(3);
    root->right->left = MakeNode(4);
    root->right->right = MakeNode(5);
    root->right->left->left = MakeNode(6);
    root->right->left->left->right = MakeNode(7);
    strictly(root);
    return 0;
}
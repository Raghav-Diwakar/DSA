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
int height(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            return 1;
        }
        else
        {
            int L = height(root->left);
            int R = height(root->right);
            int MAX = L > R ? L : R;
            return 1 + MAX;
        }
    }
}
int Diameter(struct Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int d1 = height(root->left) + height(root->right) + 1;
        int d2 = Diameter(root->right);
        int d3 = Diameter(root->left);
        // int M = Max(d1,d2,d3)
        int M1 = (d1 > d2 ? d1 : d2);
        int M2 = (d3 > M1 ? d3 : M1);
        return M2;
    }
}
void CreateTree(struct Node **T)
{
        int choice , x ;
        struct node *p ;
        printf("%d left exists (1/0)",(*T)->data );
        scanf("%d",&choice);
        // left
        if (choice ==1 ){
            printf("left data %d",(*T)->data);
            scanf("%d",&x);
            p = MakeNode(x);
            (*T)->left = p;
            CreateTree(&p);
        }
        //right 
        printf("%d right exists (1/0)",(*T)->data );
        scanf("%d",&choice);
        if (choice ==1 ){
            printf("right data %d",(*T)->data);
            scanf("%d",&x);
            p = MakeNode(x);
            (*T)->right = p;
            CreateTree(&p);
        }

}
int main()
{
    struct Node *root = NULL;
     int x ;
    printf("enter the data of root node \n");
    scanf("%d",&x);
    root=MakeNode(x);
    CreateTree(&root);
    printf("Diameter  of Tree is %d", Diameter(root));
    return 0;
}
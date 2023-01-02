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
int MPS (struct Node *root){
    if (root == NULL)
    return 0 ;
    else 
    {
        if (root->left==NULL &&root->right ==NULL)
        return root->data ;
        else {
            int L = MPS(root->left);
            int R = MPS(root->right);
            int M = L>R?L:R;
            return M + root->data ;
        }
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

};
int main(){
    struct Node *root = NULL;
    int x ;
    printf("enter the data of root node \n");
    scanf("%d",&x);
    root=MakeNode(x);
    CreateTree(&root);
          
    printf("Maximal Path Sum is %d ",MPS(root));
    return 0 ;
}
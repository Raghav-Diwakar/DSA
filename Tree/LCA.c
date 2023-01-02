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
struct Node *LCA (struct  Node *root , int x , int y){
    if (root == NULL)
        return NULL ;
    else {
        if ( root->data == x || root-> data == y)
        return root ;
        else 
        {
            int L = LCA (root->left ,x ,y ) ;
            int R = LCA(root->right,x,y) ;

            if (L == NULL)
            return R ;
            else if (R== NULL )
            return L ;
            else 
            return root ;
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

}

int main()
{
    struct Node *root = NULL;
    int x ;
    printf("enter the data of root node \n");
    scanf("%d",&x);
    root=MakeNode(x);
    CreateTree(&root);
    struct Node* L= LCA(root,3,6);
    printf("Least commman accestor between 3 and 6 is %d",L->data );
    return 0;
}
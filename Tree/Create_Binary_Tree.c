#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *left ;
    struct node *Right ;
};
struct node* MakeNode(int x){
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    p->left=NULL;
    p->Right=NULL;
    return p;
}

void PreOrderTraversal (struct node *T){
    if (T != NULL){
        printf("%d",T->data);
        PreOrderTraversal(T->left);
        PreOrderTraversal(T->Right);
    }
}
void InOrderTraversal (struct node *T){
    if  ( T != NULL){
        InOrderTraversal(T->left);
        printf("%d",T->data);
        InOrderTraversal(T->Right);
    }
}
void PostOrderTraversal(struct node *T){
    if ( T != NULL ){
        if ( T != NULL){
            PostOrderTraversal(T->left);
            PostOrderTraversal(T->Right);
            printf("%d",T->data);
        }
    }
}
int CountN0(struct node *T){
    if ( T != NULL ){
        return 0 ;
    }
    else {
        return 1 + CountN0(T->left) + CountN0(T->Right);
    }

}
void CreateTree(struct node **T)
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
            (*T)->Right = p;
            CreateTree(&p);
        }

};
int main (){
    int x ;
    struct node *p ;
    struct node *root = NULL ;
    printf("enter data of root node");
    scanf("%d",&x);
    root = MakeNode(x);

    CreateTree(&root);
    printf("Pre Order Traversal is :=> ");
    PreOrderTraversal(root);
    printf("\n In Order Traversal is :=> ");
    InOrderTraversal(root);
    printf("\n Post order Traversal is :=>");
    PostOrderTraversal(root);
}
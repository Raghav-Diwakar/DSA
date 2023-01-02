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
int search (char inorder ,  int start , int end , int current){
    int i ;
    for (int i = start ; i <=end ; i++){
        
        if (current==(inorder[i]-'0'))
        return i ;

    }
    return -1 ;

}
struct Node *tree_from_postorder_inorder (char postorder, char inorder ,int start, int end )
{
    if (start >end )
    return NULL;
    int i ;
    int current = postorder[i]-'0';  
    i--;
    struct node *root = makenode(current);
    if (start==end)
    return root ;
    int pos = search(inorder , start,end , current) ;
    root->right =tree_from_postorder_inorder(posttree , inorder, pos+1 ,end);
    root->left = tree_from_postorder_inorder(posttree, inorder,start ,pos-1 );
    return root ;
    
    
}
void InOrder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    InOrder(root->left);
    printf("%d",root->data); 
    InOrder(root->right);
}
int main (){
    char inorder[50] , postorder[50] ;
    //scan both 
    struct Node *root = tree_from_postorder_inorder (postorder, inorder,0,postorder.size()-1);
    InOrder(root);

}
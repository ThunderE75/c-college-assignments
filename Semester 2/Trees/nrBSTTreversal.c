//t C Program to implement Binary Search Tree Traversal
//h without recccursion
//* Refrence: http://www.crazyforcode.com/iterative-preorder-inorder-postorder-tree-traversals/

#include <stdio.h>
#include <conio.h>
typedef struct node
{
    int value;
    struct node *right;
    struct node *left;
}mynode;

mynode *root;

add_node(int value);
void iterativePreorder(mynode *root);
void iterativeInorder (mynode *root);
void iterativePostorder(mynode *root);


int main(int argc, char* argv[])
{
    system("cls");
    root = NULL;

    add_node(5);
    add_node(1);
    add_node(-20);
    add_node(100);
    add_node(23);
    add_node(67);
    add_node(13);

    printf("\nPreorder  (I) : ");
    iterativePreorder(root);

    printf("Postorder (I) : ");
    iterativePostorder(root);

    printf("\nInorder   (I) : ");
    iterativeInorder(root);
}

// Function to add a new node to the BST
add_node(int value){
    mynode *prev, *cur, *temp;
    temp        = (mynode *) malloc(sizeof(mynode));
    temp->value = value;
    temp->right = NULL;
    temp->left  = NULL;

    if(root==NULL){
    printf("\nCreating the root..\n");
    root = temp;
    return;
    }

    prev=NULL;
    cur=root;

    while(cur!=NULL){
    prev=cur;
    cur=(value<cur->value)?cur->left:cur->right;
    }

    if(value < prev->value)
        prev->left=temp;
    else
        prev->right=temp;
}

// Iterative Preorder
void iterativePreorder(mynode *root){
    mynode *save[100];
    int top = 0;

    if (root == NULL){
        return;
    }

    save[top++] = root;
    while (top != 0){
        root = save[--top];
        printf("[%d]\t", root->value);
        if (root->right != NULL)
        save[top++] = root->right;
        if (root->left != NULL)
        save[top++] = root->left;
    }
}

// Iterative Postorder
void iterativePostorder(mynode *root){
    struct{
        mynode *node;
        unsigned vleft :1;   // Visited left?
        unsigned vright :1;  // Visited right?
    }save[100];
    int top = 0;
    save[top++].node = root;
    while ( top != 0 ){
        /* Move to the left subtree if present and not visited */
        if(root->left != NULL && !save[top].vleft){
            save[top].vleft = 1;
            save[top++].node = root;
            root = root->left;
            continue;
        }

        /* Move to the right subtree if present and not visited */
        if(root->right != NULL && !save[top].vright ){
            save[top].vright = 1;
            save[top++].node = root;
            root = root->right;
            continue;
        }
        printf("[%d]\t", root->value);

        /* Clean up the stack */
        save[top].vleft = 0;
        save[top].vright = 0;

        /* Move up */
        root = save[--top].node;
    }
}

// Iterative Inorder..
void iterativeInorder (mynode *root){
    mynode *save[100];
    int top = 0;
    while(root != NULL){
        while (root != NULL){
                if (root->right != NULL){
                save[top++] = root->right;
                }
                save[top++] = root;
                root = root->left;
        }

        root = save[--top];
        while(top != 0 && root->right == NULL){
            printf("[%d]\t", root->value);
            root = save[--top];
        }
        printf("[%d]\t", root->value);
        root = (top != 0) ? save[--top] : (mynode *) NULL;
    }   
}
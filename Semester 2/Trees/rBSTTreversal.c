//t C Program to implement Binary Search Tree Traversal
//h with recccursion
//* Refrence: http://www.c4learn.com/c-programs/c-program-to-implement-binary-search-tree-traversal.html

# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
typedef struct BST {
   int data;
   struct BST *lchild, *rchild;
} node;
 
void insert(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);
node *search(node *, int, node **);
 
void main() {
   int choice;
   int key;
   node *new_node, *root, *tmp, *parent;
   node *get_node();
   root = NULL;
   system("cls");
 
   while(1){
      printf("\nMenu");
      printf("\n1.Insert");
      printf("\n2.Search");
      printf("\n3.Recursive Traversals");
      printf("\n4.Exit");
      printf("\nEnter your choice: ");
      scanf("%d", &choice);
      switch (choice) {
      case 1:
            new_node = get_node();
            printf("Enter The Element ");
            scanf("%d", &new_node->data);
            if (root == NULL) /* Tree is not Created */
               root = new_node;
            else
               insert(root, new_node);
         break;
 
      case 2:
         printf("\nEnter Element to be searched :");
         scanf("%d", &key);
         tmp = search(root, key, &parent);
         printf("\nParent of node %d is %d", tmp->data, parent->data);
         break;
 
      case 3:
         if (root == NULL)
            printf("Tree Is Not Created");
         else {
            printf("\nThe Inorder display : ");
            inorder(root);
            printf("\nThe Preorder display : ");
            preorder(root);
            printf("\nThe Postorder display : ");
            postorder(root);
         }
         break;
      case 4:
         exit(0);
         break;
      }
   }
   return 0;
}


node *get_node() { // get new node
   node *temp;
   temp = (node *) malloc(sizeof(node));
   temp->lchild = NULL;
   temp->rchild = NULL;
   return temp;
}
//-This function is for creating a binary search tree
void insert(node *root, node *new_node) {
   if (new_node->data < root->data) {
      if (root->lchild == NULL)
         root->lchild = new_node;
      else
         insert(root->lchild, new_node);
   }
 
   if (new_node->data > root->data) {
      if (root->rchild == NULL)
         root->rchild = new_node;
      else
         insert(root->rchild, new_node);
   }
}
//- This function is for searching the node from binary Search Tree
node *search(node *root, int key, node **parent) {
   node *temp;
   temp = root;
   while (temp != NULL) {
      if (temp->data == key) {
         printf("\nThe %d Element is Present", temp->data);
         return temp;
      }
      *parent = temp;
 
      if (temp->data > key)
         temp = temp->lchild;
      else
         temp = temp->rchild;
   }
   return NULL;
}
//-This function displays the tree in inorder fashion
void inorder(node *temp) {
   if (temp != NULL) {
      inorder(temp->lchild);
      printf("%d ", temp->data);
      inorder(temp->rchild);
   }
}

//-This function displays the tree in preorder fashion
void preorder(node *temp) {
   if (temp != NULL) {
      printf("%d ", temp->data);
      preorder(temp->lchild);
      preorder(temp->rchild);
   }
}
 
//-This function displays the tree in postorder fashion
void postorder(node *temp) {
   if (temp != NULL) {
      postorder(temp->lchild);
      postorder(temp->rchild);
      printf("%d ", temp->data);
   }
}
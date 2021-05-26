// Binary Search Tree operations in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

// Create a node
struct node *newNode(int value) {
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Inorder Traversal
void inorderTraversal(struct node *root) {
  if (root != NULL) {

    inorderTraversal(root->left);
    printf("%d-> ", root->data);
    inorderTraversal(root->right);
  }
}


// Insert a node
struct node *insertNode(struct node *node, int value) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(value);

  // Traverse to the right place and insert the node
  if (value < node->data)
    node->left = insertNode(node->left, value);
  else
    node->right = insertNode(node->right, value);

  return node;
}



// Driver code
int main() {
  struct node *root = NULL;
  root = insertNode(root, 8);
  root = insertNode(root, 3);
  root = insertNode(root, 1);

  root = insertNode(root, 6);
  root = insertNode(root, 7);
  root = insertNode(root, 10);
  root = insertNode(root, 14);
  root = insertNode(root, 4);

  printf("Inorder traversal: ");
  inorderTraversal(root);
  printf("NULL \n");


}

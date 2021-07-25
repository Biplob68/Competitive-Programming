#include<stdio.h>
#include<stdlib.h>

struct node
{
    int value;
    struct node *left;
    struct node *right;
};


// Function to create a new node
struct node *createNode(int value)
{
    struct node *newNode = (struct node *) malloc(sizeof(struct node));

    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Function to insert a node into BST
struct node *insertNode(struct node *node, int value)
{
    if(node == NULL) return createNode(value);

    // Traverse to the right place and insert the node
    if(value < node->value)
        node->left = insertNode(node->left, value);
    else
        node->right = insertNode(node->right, value);

    return node;
}

// Find the successor node
struct node *succesor_node(struct node *node)
{
    struct node *current = node;

    // Find the leftmost leaf
    while(current && current->left != NULL)
    {
       current = current->left;
    }
    return current;

}


// In-order Traversal
void inorderTraversal(struct node *root)
{
    if (root != NULL)
    {

        inorderTraversal(root->left);
        printf("%d-> ", root->value);
        inorderTraversal(root->right);
    }
}

// Deleting a node
struct node *deleteNode(struct node *root, int value) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (value < root->value)
    root->left = deleteNode(root->left, value);
  else if (value > root->value)
    root->right = deleteNode(root->right, value);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = succesor_node(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->value = temp->value;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->value);
  }
  return root;
}


int main()
{
    struct node *root = NULL;

    root = insertNode(root, 8);
    insertNode(root, 4);
    insertNode(root, 6);
    insertNode(root, 9);

    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 5);
    insertNode(root, 7);

    printf("In-order Traversal: ");
    inorderTraversal(root);
    printf("NULL\n");

    root = deleteNode(root, 4);
    printf("\nAfter deleting 5\n");
    inorderTraversal(root);
    printf("NULL\n");

    return 0;
}

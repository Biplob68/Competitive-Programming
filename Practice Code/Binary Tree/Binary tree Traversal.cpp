#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    Node *left;
    Node *right;
};


// Create a new Node
struct Node *createNode(int value)
{
    struct Node *newNode =(struct Node*) malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;

}

void add_left_child(struct Node *root, struct Node *child)
{
    root->left = child;
}

void add_right_child(struct Node *root, struct Node *child)
{
    root->right = child;
}


//Create Binary tree
struct Node *createTree()
{
    struct Node *two = createNode(2);
    struct Node *seven = createNode(7);
    struct Node *nine = createNode(9);

    add_left_child(two, seven);
    add_right_child(two, nine);

    struct Node *one = createNode(1);
    struct Node *ten = createNode(10);

    add_left_child(seven, one);
    add_right_child(seven, ten);

    return two;

}


// Inorder traversal
void inorderTraversal(struct Node *root) {
  if (root == NULL) return;

  inorderTraversal(root->left);
  printf("%d-> ", root->data);
  inorderTraversal(root->right);
}


// Preorder traversal
void preorderTraversal(struct Node *root) {
  if (root == NULL) return;

  printf("%d-> ", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct Node* root) {
  if (root == NULL) return;

  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d-> ", root->data);
}

int main()
{
    struct Node *root = createTree();


    printf("Inorder traversal : \n");
    inorderTraversal(root);
    printf("NULL\n\n");

    printf("Preorder traversal : \n");
    preorderTraversal(root);
    printf("NULL\n\n");

    printf("Postorder traversal : \n");
    postorderTraversal(root);
    printf("NULL\n");

    return 0;

}


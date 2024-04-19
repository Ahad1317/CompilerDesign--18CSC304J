// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

//define structure
typedef struct Node{
    char data;
    struct Node *left;
    struct Node *right;
}Node;

//create new node
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to traverse the syntax tree and perform arithmetic operations
int evaluate(Node* root) {
if (root == NULL) return 0;
// If the node is a number, return its value
if (root->data >= '0' && root->data <= '9') {
return root->data - '0';
}
int leftValue = evaluate(root->left);
int rightValue = evaluate(root->right);

//Perform arithmetic operations based on the operato


switch (root->data) {
case '+':
return leftValue + rightValue;
case '-':
return leftValue - rightValue;
case '*':
return leftValue * rightValue;
case '/':
if (rightValue != 0) {
return leftValue / rightValue;
} else {
printf("Error: Division by zero\n");
exit(EXIT_FAILURE);
}
default:
printf("Error: Invalid operator\n");
exit(EXIT_FAILURE);
}
}


int main() {
// Construct the syntax tree for the expression "((3+2)*5)"
Node* root = createNode('*');
root->left = createNode('+');
root->right = createNode('5');
root->left->left = createNode('3');
root->left->right = createNode('2');

int result = evaluate(root);
printf("Result: %d\n", result);

return 0;}
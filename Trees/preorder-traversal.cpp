/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root) {
    // Base case
    if (root == 0)
        return;
    else
    {
        // Root
        cout << root->data << " ";
        
        // Left Child
        preOrder(root->left);
        
        // Right Child
        preOrder(root->right);
    }
}
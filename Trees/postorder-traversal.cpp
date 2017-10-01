/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *root) {
    // Base case
    if (root == 0)
        return;
    else
    {
        // Left child
        postOrder(root->left);
        
        // Right child
        postOrder(root->right);
        
        // Root
        cout << root->data << " ";
    }
}
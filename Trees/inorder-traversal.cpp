/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {
    // Base case
    if (root == 0)
        return;
    else
    {
        // Left child
        inOrder(root->left);
        
        // Root
        cout << root->data << " ";
        
        // Right child
        inOrder(root->right);
    }
}
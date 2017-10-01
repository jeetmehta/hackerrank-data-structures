/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value)
{
    if (root == 0)
    {
        node * added_node = new node();
        added_node->data = value;
        return added_node;
    }
    else
    {
        // Use current and parent nodes to keep track during traversal
        node * current = root;
        node * parent = current;
        
        // Search for place to put the node
        while (current != 0)
        {
            if (value < current->data)
            {
                parent = current;
                current = current->left;
            }
            else if (value >= current->data)
            {
                parent = current;
                current = current->right;
            }
        }
        
        // Create node to be added
        node * added_node = new node();
        added_node->data = value;
        
        // Add node
        if (value < parent->data)
        {
            parent->left = added_node;
        }
        else
        {
            parent->right = added_node;
            added_node->data = value;
        }
    }
    return root;
}
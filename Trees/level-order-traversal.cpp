/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void levelOrder(node * root) {
    
    // Queue to keep track of nodes to visit
    queue <node*> unvisited;
    
    // Deal with empty tree
    if (root == 0)
        return;
    else
    {
        // Add root to queue
        unvisited.push(root);
        
        // Continue until all children have been visited
        while (!unvisited.empty())
        {
            // Visit the front node of the queue
            node * current = unvisited.front();
            unvisited.pop();
            cout << current->data << " ";
            
            // Add it's children to the queue
            if (current->left != 0)
                unvisited.push(current->left);
            if (current->right != 0)
                unvisited.push(current->right);
        }
    }
}
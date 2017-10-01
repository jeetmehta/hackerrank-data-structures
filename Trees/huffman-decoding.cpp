/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root, string s)
{
    if (root == 0)
        return;
    else
    {
        string output = "";
        node* current = root;
        for (int i = 0; i < s.length(); i++)
        {
            // If leaf node: add to output and reset current node to root
            if (current->left == 0 && current->right == 0)
            {
                output = output + current->data;
                current = root;
            }
            // Move left
            if (s[i] == '0')
            {
                current = current->left;
            }
            // Move right
            else if (s[i] == '1')
            {
                current = current->right;
            }
        }
        
        // Add the final character if it's at a leaf node
        if (current->left == 0 && current->right == 0)
        {
            output = output + current->data;
            current = root;
        }
        
        // Output
        cout << output;
    }
    
}
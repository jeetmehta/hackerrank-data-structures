
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

    int height(Node* root, int tree_height = 0) {
        // Base cases: empty node/root & leaf nodes
        if (root == 0)
            return tree_height;
        else if (root->left == 0 && root->right == 0)
            return tree_height;
        else
        {
            // Check left subtree
            int depth_l = height(root->left, tree_height + 1);

            // Check right subtree
            int depth_r = height(root->right, tree_height + 1);
            
            // Compare the two sides
            if (depth_l > tree_height)
                tree_height = depth_l;
            if (depth_r > tree_height)
                tree_height = depth_r;
        }
        return tree_height;
    }
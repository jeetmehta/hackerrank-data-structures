/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <vector>

void ReversePrint(Node *head)
{
    // This is a "method-only" submission.
    // You only need to complete this method.
    
    if (head == 0)
        return;
    else
    {
        Node* temp = head;
        vector <int> values;
        while (temp != 0)
        {
            values.push_back(temp->data);
            temp = temp->next;
        }
        
        for (int i = values.size() - 1; i >= 0; i--)
            cout << values[i] << endl;
    }
}
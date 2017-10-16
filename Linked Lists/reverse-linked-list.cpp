/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Reverse(Node *head)
{
    if (head == 0 || head->next == 0)
        return head;
    else
    {
        // Start @ begining of list
        Node* first = head;
        Node* rest = first->next;
        
        // Recursively reverse rest of list
        Node* remaining = Reverse(rest);
        
        // Join reversed portion with the current node
        first->next->next = first;
        first->next = 0;
        return remaining;
    }
}
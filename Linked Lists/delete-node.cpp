/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

Node* Delete(Node *head, int position)
{
    // Complete this method
    if (head == 0)
        return head;
    else if (position == 0)
    {
        Node* temp = head;
        head = head->next;
        return head;
    }
    else
    {
        int current_pos = 0;
        Node* temp = head;
        Node* behindTemp = temp;
        while (current_pos != position)
        {
            behindTemp = temp;
            temp = temp->next;
            current_pos++;
        }
        behindTemp->next = temp->next;
        return head;
    }
    return 0;
}
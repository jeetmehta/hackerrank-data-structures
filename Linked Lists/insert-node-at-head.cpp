/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    // Complete this method
    Node* newNode = new Node();
    newNode->next = 0;
    newNode->data = data;
    
    if (head == 0)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        head = newNode;
        head->next = temp;
    }
    return head;
}
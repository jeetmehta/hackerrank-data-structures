/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head, int data)
{    
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = 0;
    
    // Complete this method
    if (head == 0)
        head = newNode;
    else
    {
        Node* temp = head;
        while (temp->next != 0)
            temp = temp->next;
        
        temp->next = newNode;
    }
    return head;  
}
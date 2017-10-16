/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

void printLinkedList(Node *head)
{
    Node* temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


Node* InsertNth(Node *head, int data, int position)
{
    // Complete this method only
    // Do not write main function
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = 0;

    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
    }
    else if (head == 0)
        head = newNode;
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
        behindTemp->next = newNode;
        newNode->next = temp;
    }
    
    return head;
}
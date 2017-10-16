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
#include <vector>

void print_vector(vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_linkedList(Node* head)
{
    Node* temp = head;
    while (temp != 0)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* Reverse(Node *head)
{
    // Complete this method
    
    if (head == 0)
        return 0;
    else
    {
        vector <int> values;
        Node* temp = head;
        while (temp != 0)
        {
            values.push_back(temp->data);
            temp = temp->next;
        }
        
        Node* newNode = new Node();
        newNode->data = values[values.size() - 1];
        Node* newHead = newNode;
        Node* temp2 = newHead;
        
        for (int i = values.size() - 2; i >= 0; i--)
        {
            Node* newNode2 = new Node();
            newNode2->data = values[i];
            newNode2->next = 0;
            
            temp2->next = newNode2;
            temp2 = temp2->next;
        }
        
        return newHead;
    }
}
#include<bits/stdc++.h>

using namespace std;

struct Node{

  int data;
  struct Node* next;
};

void print(Node* head)
{
  Node* cur=head;
  while(cur!=NULL)
  { 
    cout<<cur->data<<" ";
    cur=cur->next;
  }
  cout<<'\n';
}

void insert_front(Node** head, int x)
{
  Node* nn = new Node();
  nn->data = x;
  nn->next=*head;
  *head=nn;
}

void insert_tail(Node* last, int x)
{
  Node* nn = new Node();
  nn->data = x;
  nn->next = NULL;
  last->next = nn;
}
void insert_mid(Node* mid, int x)
{
  if(mid==NULL)
  {
    cout<<"This mid node cannot be null!!"<<'\n';
  }
  Node* nn = new Node();
  nn->data=x;
  nn->next = mid->next;
  mid->next = nn;
}
void insert_tail_from_head(Node** head, int x)
{
  Node* cur=*head;
  Node* nn= new Node();
  nn->data=x;
  nn->next = NULL;
  if(cur==NULL){
    *head = nn; 
  }
  while(cur->next!=NULL)
  {
    cur=cur->next;
  }
  cur->next = nn;
}

void deleteNode(Node** head, int key)
{
  if(*head == NULL ){
    cout<<"Empty list"<<'\n';
    return;
  }
  int f=0;
  Node* cur= *head;
  if(cur->data == key){
    *head = cur->next;
    free(cur);
    return;
  }
  
  while(cur->next != NULL && cur->next->data!=key){
    cur=cur->next;
  }
  if(cur->next == NULL){
    cout<<"NO such key"<<'\n';
    return;
  }
  Node* tmp= cur->next;
  cur->next = tmp->next;
  free(tmp);
}
int main()
{
  // hard-coded linked list
  Node* head = NULL;
  Node* first = NULL;
  Node* second = NULL;
  Node* third = NULL;
  head = new Node();
  first = new Node();
  second = new Node();
  third = new Node();
  
  
  first->next = second;
  second->data = 2;
  second->next = third;
  third->data = 3;
  third->next = NULL;
// Question: what pointer to use for traversing the whole linked list
// as it can't be accessed index wise?? 

// head = ???


  head = first;

// Code to print the traversal of linked list??
  print(head);
// linked list as per user choice --> Insertion

  insert_front(&head, 4);
  print(head);
  
  insert_mid(second, 5);
  print(head);
  
// if passed the last pointer 
  insert_tail(third, 6);
  print(head);
  
// if passed the head
  insert_tail_from_head(&head, 7);
  print(head);
  
  deleteNode(&head, 5);
  print(head);
  
  deleteNode(&head, 4);
  print(head);
  
  
}
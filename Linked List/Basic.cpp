#Making a LinkedList with the help of Array

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
}*first=NULL;

void create(int A[], int n)
{
	struct node *t, *last;
	first=new node;
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	for(int i=1; i<n; i++)
	{
		t=new node;
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void printLinkedlist()
{	
	node *temp=first;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	create(arr,size);
	printLinkedlist();
}

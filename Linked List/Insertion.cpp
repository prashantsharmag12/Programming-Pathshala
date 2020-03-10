//Insertion at front and at end

#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
}*first=NULL;

void makeLinkedlist(int arr[], int n)
{
	struct node *temp, *last;
	first=new node;
	first->data=arr[0];
	first->next=NULL;
	last=first;
	
	for(int i=1; i<n; i++)
	{
		temp=new node;
		temp->data=arr[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;
	
	}
}

void insertatfront(int val)
{
	struct node *temp;
	temp=new node;
	temp->data=val;
	temp->next=first;
	first=temp;
}

void insertatend(int val)
{
	struct node *temp;
	temp=new node;
	temp->data=val;
	temp->next=NULL;
	struct node *last=first;
	while(last->next!=NULL)
	last=last->next;
	last->next=temp;
}


void print()
{
	struct node *p=first;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	makeLinkedlist(arr, size);
	insertatfront(0);
	insertatend(6);
	print();	
}

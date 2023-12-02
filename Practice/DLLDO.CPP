// Insetion of Circular LinkedList.

#include<iostream.h>
#include<conio.h>

struct Node{
	int data;
	Node *next;

	Node(int data): data(data), next(NULL){}
};

void displayList(Node *head){
	Node *temp = head;
	cout<<"Elements : ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

Node *deleteAtBegin(Node *head){
	Node * temp=head;
	head=temp->next;
	delete temp;
	return head;
}

int main(){
	clrscr();
	Node *head = new Node(10);
	Node *second = new Node(20);
	Node *third = new Node(30);
	Node *forth = new Node(40);
	Node *fifth = new Node(50);

	head->next = second;
	second->next = third;
	third->next = forth;
	forth->next = fifth;
	fifth->next = NULL;
	displayList(head);
	head=deleteAtBegin(head);
	displayList(head);

	getch();
	return 0;
}
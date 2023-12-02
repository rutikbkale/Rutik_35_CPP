// Insertion operations on LinkedList.

#include<iostream.h>
#include<conio.h>

struct Node{
	int data;
	Node *next;

	Node(int data):data(data), next(NULL){}
};

void displayList(Node *head){
	Node *temp = head;
	cout<<"LinkedList Elements : ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

Node *insertAtBegin(Node *head, int data){
	Node *newNode = new Node(data);
	newNode->next=head;
	head=newNode;
	return newNode;
}

Node *insertAtEnd(Node *head, int data){
	Node *newNode = new Node(data);
	Node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	return head;
}

Node *insertAtIndex(Node *head, int data, int index){
	Node *newNode = new Node(data);
	Node *temp = head;
	for(int i=0; i<index-1; i++){
		temp= temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return head;
}

int main(){
	clrscr();

	Node *head = new Node(10);
	displayList(head);
	head = insertAtBegin(head,20);
	displayList(head);
	head = insertAtEnd(head,30);
	displayList(head);
	head = insertAtIndex(head,40,2);
	displayList(head);
	getch();
	return 0;
}
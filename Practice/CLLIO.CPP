// Circular LinkedList insertion operation.

#include<iostream.h>
#include<conio.h>

struct Node{
	int data;
	Node *next;

	Node(int data):data(data),next(NULL){}
};

void displayList(Node *head){
	Node *temp = head;
	cout<<"Elements : ";
	do{
		cout<<temp->data<<" ";
		temp= temp->next;
	}while(temp !=head);
	cout<<endl;
}

Node *insertAtBegin(Node *head, int data){
	Node *newNode = new Node(data);
	Node *temp = head->next;

	do{
	temp=temp->next;
	}while(temp->next != head);
	temp->next=newNode;
	newNode->next=head;
	head=newNode;
	return head;
}

Node *insertAtEnd(Node *head, int data){
	Node *newNode = new Node(data);
	Node *temp =head->next;
	do{
		temp= temp->next;
	}while(temp->next != head);
	temp->next=newNode;
	newNode->next=head;
	return head;
}

Node *insertAtIndex(Node *head, int data, int index){
	Node *newNode = new Node(data);
	Node *temp=head;
	for(int i=0; i<index-1; i++){
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	return head;
}

int main(){
	clrscr();
	Node *head = new Node(10);
	Node *second = new Node(20);
	Node *third = new Node(30);

	head->next=second;
	second->next=third;
	third->next=head;

       displayList(head);
       head = insertAtBegin(head, 0);
       displayList(head);
       head = insertAtEnd(head, 40);
       displayList(head);
       head = insertAtIndex(head, 50,3);
       displayList(head);

	getch();
	return 0;
}
// Deletion operations on LinkedList.

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

Node *deleteAtBegin(Node *head){
	Node *temp = head;
	head=temp->next;
	delete temp;
	return head;
}

Node *deleteAtEnd(Node *head){
	Node *temp = head;
	while(temp->next->next != NULL){
		temp = temp->next;
	}
	Node *ptr = temp->next->next;
	delete ptr;
	temp->next = NULL;
	return head;
}

Node *deleteAtIndex(Node *head, int index){
	Node *temp = head;
	for(int i=0; i<index-1; i++){
		temp = temp->next;
	}
	Node *ptr = temp->next;
	temp->next = ptr->next;
	delete ptr;
	return head;
}

Node *deleteAtValue(Node *head, int data){
	Node *temp = head;
	Node *ptr = head->next;
	while(temp != NULL){
		if(ptr->data == data){
			temp->next=ptr->next;
			delete ptr;

		}else{
			temp=temp->next;
			ptr=ptr->next;
		}
	}
	return head;
}

int main(){
	clrscr();

	Node *head = new Node(10);
	Node *second = new Node(20);
	Node *third = new Node(30);
	Node *forth = new Node(40);
	Node *fifth = new Node(50);

	head->next =second;
	second->next =third;
	third->next =forth;
	forth->next =fifth;
	fifth->next =NULL;

	displayList(head);
	//head = deleteAtBegin(head);
	//displayList(head);
       //head = deleteAtEnd(head);
       //displayList(head);
	//head = deleteAtIndex(head,2);
	//displayList(head);
	head = deleteAtValue(head,40);
	displayList(head);

	getch();
	return 0;
}
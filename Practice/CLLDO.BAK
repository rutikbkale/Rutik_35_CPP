//Circular LinkedList Deletion operation.

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
	do{
		cout<<temp->data<<" ";
		temp = temp->next;
	}while(temp != head);
	cout<<endl;
}

Node *deleteAtBegin(Node *head){
	Node *temp=head;
	Node *ptr=head;
	do{
		ptr=ptr->next;
	}while(ptr->next !=head);
	ptr->next=temp->next;
	head=ptr->next;
	delete temp;
	return head;
}

Node *deleteAtEnd(Node *head){
	Node *temp=head;
	Node *ptr=head;
	do{
		ptr=ptr->next;
	}while(ptr->next->next != head);
	temp=ptr->next;
	ptr->next=head;
	delete temp;
	return head;
}

Node *deleteAtIndex(Node *head, int index){
	Node *temp=head;
	Node *ptr=head->next;
	for(int i=0; i<index-1; i++){
		temp=temp->next;
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	delete ptr;
	return head;
}

Node *deleteAtValue(Node *head, int value){
	Node *temp=head;
	Node *ptr=head->next;
	do{
		if(ptr->data == value){
			temp->next=ptr->next;
			delete ptr;
		}else{
			temp=temp->next;
			ptr=ptr->next;
		}
	}while(temp->next != head);
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
	fifth->next = head;
	displayList(head);
	//head=deleteAtBegin(head);
	//displayList(head);
	//head=deleteAtEnd(head);
	//displayList(head);
	//head=deleteAtIndex(head,2);
	//displayList(head);
	head=deleteAtValue(head,20);
	displayList(head);

	getch();
	return 0;
}
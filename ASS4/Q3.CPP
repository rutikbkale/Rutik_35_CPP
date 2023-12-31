//Q3. WAP to insert 5 node into the linkedlist.
#include <iostream.h>
#include <conio.h>

struct Node {
    int data;
    Node* next;

    Node(int value) {
	data = value;
	next = NULL;
    }
};

void insertNode(int value, Node* head) {
    Node* newNode = new Node(value);
    if (head == NULL) {
	head = newNode;
	return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
	temp = temp->next;
    }
    temp->next = newNode;
}

void displayNode(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
	cout << "List is Empty.";
	return;
    }
    cout << "LinkedList: ";
    do {
	cout << temp->data << " ";
	temp = temp->next;
    } while (temp != NULL);
    cout << endl;
}

int main() {
    clrscr();
    int arr[5]={10,20,30,40,50};
    Node* head = new Node(arr[0]);
    for(int i=1;i<5;i++){
	insertNode(arr[i], head);
    }
    /*insertNode(20, head);
    insertNode(30, head);
    insertNode(40, head);
    insertNode(50, head);*/
    displayNode(head);

    getch();
    return 0;
}

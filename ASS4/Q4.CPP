//Q4. WAP to perform push and pop operations on stack.
#include <iostream.h>
#include <conio.h>
#define size 5

/*const int MAX_SIZE = 5; // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    // Function to push an element onto the stack
    void push(int value) {
	if (top == MAX_SIZE - 1) {
	    cout << "Stack Overflow: Cannot push element, stack is full." << endl;
	    return;
	}
	arr[++top] = value;
	cout << "Pushed " << value << " onto the stack." << endl;
    }

    // Function to pop an element from the stack
    void pop() {
	if (top == -1) {
	    cout << "Stack Underflow: Cannot pop element, stack is empty." << endl;
	    return;
	}
	cout << "Popped " << arr[top--] << " from the stack." << endl;
    }

    // Function to display the elements of the stack
    void displayStack() {
	if (top == -1) {
	    cout << "Stack is empty." << endl;
	    return;
	}
	cout << "Stack Elements: ";
	for (int i = 0; i <= top; ++i) {
	    cout << arr[i] << " ";
	}
	cout << endl;
    }
};

int main() {
    Stack myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the stack
    myStack.displayStack();

    // Pop elements from the stack
    myStack.pop();
    myStack.pop();

    // Display the stack after popping
    myStack.displayStack();

    getch(); // Wait for a key press before closing the console window
    return 0;
} */

class Stack{

	private :
		int top;
		int stack[size];

	public:
		Stack():top(-1){}

		void push(int value){
			if(top==size-1){
				cout<<"Stack is overflow.";
				return;
			}
			stack[++top]=value;
			cout<<"pushed element : "<<value<<endl;
		}

		void pop(){
			if(top==-1){
				cout<<"Stack is empty.";
				return;
			}
			cout<<"poped element : "<<stack[top--]<<endl;
		}

		void display(){
		       if(top==-1){
				cout<<"Stack is empty.";
				return;
			}
			cout<<"Stack element : ";
			for(int i=0; i<=top; ++i)
				cout<<stack[i]<<" ";
		     //	}
			cout<<endl;
		}

};

int main(){

	clrscr();
	Stack obj;
       /*	obj.push(10);
	obj.display();
	obj.push(20);
	obj.display();
	obj.pop();
	obj.display();*/

	int ch,a,flag=1;
	do{
	cout<<"1.PUSH \n";
	cout<<"2.POP \n";
	cout<<"3.DISPLAY \n";
	cout<<"4.EXIT \n\n";

	cout<<"Enter your choice : ";
	cin>>ch;

	switch(ch){
		case 1:
		cout<<"Enter element to push : ";
		cin>>a;
		obj.push(a);
		break;

		case 2:
		obj.pop();
		break;

		case 3:
		obj.display();
		break;

		case 4:
		flag=0;
		break;

		default:
		cout<<"invalid input!";
		flag=0;
		break;
	}
       }while(flag==1);
       getch();
       return 0;
}




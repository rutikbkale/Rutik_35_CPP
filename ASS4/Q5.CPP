#include <iostream.h>
#include <conio.h>

const int MAX_SIZE = 5; // Maximum size of the queue

class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() : front(-1), rear(-1) {}

    // Function to enqueue (push) an element into the queue
    void enqueue(int value) {
        if ((front == 0 && rear == MAX_SIZE - 1) || (rear == (front - 1) % (MAX_SIZE - 1))) {
            cout << "Queue Overflow: Cannot enqueue element, queue is full." << endl;
            return;
        }

        if (front == -1) {
            // If the queue is empty, set both front and rear to 0
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }

        arr[rear] = value;
        cout << "Enqueued " << value << " into the queue." << endl;
    }

    // Function to dequeue (pop) an element from the queue
    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow: Cannot dequeue element, queue is empty." << endl;
            return;
        }

        int value = arr[front];
        if (front == rear) {
            // If there is only one element in the queue, set front and rear to -1
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }

        cout << "Dequeued " << value << " from the queue." << endl;
    }

    // Function to display the elements of the queue
    void displayQueue() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue Elements: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);

        cout << endl;
    }
};

int main() {
	clrscr();
    Queue myQueue;

    // Enqueue elements into the queue
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    // Display the queue
    myQueue.displayQueue();

    // Dequeue elements from the queue
    myQueue.dequeue();
    myQueue.dequeue();

    // Display the queue after dequeuing
    myQueue.displayQueue();

    getch(); // Wait for a key press before closing the console window
    return 0;
}

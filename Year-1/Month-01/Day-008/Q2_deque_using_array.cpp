#include <iostream>
using namespace std;

#define SIZE 5

class Deque {
    int arr[SIZE];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (front == 0 && rear == SIZE - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void insertFront(int value) {
        if (isFull()) {
            cout << "Deque is Full!" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        }
        else if (front == 0) {
            front = SIZE - 1;
        }
        else {
            front--;
        }

        arr[front] = value;
        cout << value << " inserted at front." << endl;
    }

    void insertRear(int value) {
        if (isFull()) {
            cout << "Deque is Full!" << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        }
        else if (rear == SIZE - 1) {
            rear = 0;
        }
        else {
            rear++;
        }

        arr[rear] = value;
        cout << value << " inserted at rear." << endl;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is Empty!" << endl;
            return;
        }

        cout << arr[front] << " deleted from front." << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else if (front == SIZE - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque is Empty!" << endl;
            return;
        }

        cout << arr[rear] << " deleted from rear." << endl;

        if (front == rear) {
            front = rear = -1;
        }
        else if (rear == 0) {
            rear = SIZE - 1;
        }
        else {
            rear--;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Deque is Empty!" << endl;
            return;
        }

        cout << "Deque elements: ";

        int i = front;
        while (true) {
            cout << arr[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % SIZE;
        }

        cout << endl;
    }
};

int main() {
    system("cls");

    Deque dq;

    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertFront(2);

    dq.display();

    dq.deleteFront();
    dq.display();

    dq.deleteRear();
    dq.display();

    system("pause");
    system("cls");
    return 0;
}
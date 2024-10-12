#include <iostream>
using namespace std;
#define SIZE 5

class Queue
{
private:
    static int front;
    static int rear;
    static int queue[];

public:
    static void Enqueue(int element)
    {
        if (isFull())
        {
            cout << "Queue Overflow";
            return;
        }
        else if (isEmpty())
        {
            front++;
            rear++;
        }
        else
            rear++;

        queue[rear] = element;
        cout << "Element " << element << " Enqueued" << endl;
    }
    static void Dequeue()
    {
        if (front > rear)
        {
            cout << "Queue Underflow";
            return;
        }
        cout << "Element " << queue[front] << " Dequeued" << endl;
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
            front++;
    }
    static void Display()
    {
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
    }

    static bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }

    static bool isFull()
    {
        if (rear == SIZE - 1)
            return true;
        else
            return false;
    }
};

int Queue::front = -1;
int Queue::rear = -1;
int Queue::queue[] = {0};

int main()
{
    do
    {
        int choice;
        cout << endl
             << "1 -> Enqueue ; 2 -> Dequeue ; 3 -> Display ; 4 -> Exit" << endl;
        cin >> choice;
        switch (choice)
        {

        case 1:
            cout << "Enter Element to be Enqueued -> ";
            int element;
            cin >> element;
            cout << endl;
            Queue::Enqueue(element);
            break;
        case 2:
            cout << endl;
            Queue::Dequeue();
            cout << endl;
            break;
        case 3:
            cout << endl;
            Queue::Display();
            cout << endl;
            break;
        case 4:
            cout << "Exit";
            exit(1);
            break;

        default:
            break;
        }
    } while (true);
}
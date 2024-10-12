#include <iostream>
using namespace std;
#define SIZE 5

class StackOperations
{
    private:
        static int stack[SIZE];
        static int top;

    public:
        static bool isEmpty();
        static bool isFull();
        static int peek();
        static void push(int e);
        static int pop();
        static void display();
};

int StackOperations ::top = -1;
int StackOperations ::stack[] = {0};

bool StackOperations::isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}

bool StackOperations::isFull()
{
    if (top == 4)
        return true;
    else
        return false;
}

int StackOperations::peek()
{
    if (isEmpty()) 
        return -1;
    else
        return stack[top];
}

void StackOperations::push(int e)
{
    if (isFull())
        cout << "\n\nSTACK OVERFLOW\n\n";

    else
    {
        stack[++top] = e;
        cout << "Element \" " << e << " \"is pushed inside Stack" << endl;
    }
}

int StackOperations ::pop()
{
    if (isEmpty())
        return -1;
    else
        return stack[top--];
}

void StackOperations ::display()
{
    if (isEmpty())
        cout << "Stack is Empty" << endl;
    else
    {
        cout << "\n\nSTACK : ";
        for (int i = top; i >= 0; i--)
            cout << stack[i] << " ";
        cout << endl;
    }
}

int main()
{

    bool flag = true;
    do
    {
        int choice;
        
        cout << "Enter 1:Push 2:Pop 3:Check Empty 4:Check Full 5:Peek 6:Display 7:Exit -> ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter integer to push -> ";
            cin >> element;
            StackOperations::push(element);
            break;

        case 2:
            int status1;
            status1 = StackOperations::pop();
            if (status1 == -1)
                cout << "\nCannot pop as Stack is Empty" << endl;
            else
                cout << "Element " << status1 << " popped from stack" << endl;
            break;

        case 3:
            if (StackOperations::isEmpty())
                cout << "Stack is Empty" << endl;
            else
                cout << "Stack is not Empty" << endl;
            break;

        case 4:
            if (StackOperations::isFull())
                cout << "Stack is Full" << endl;
            else
                cout << "Stack is not Full" << endl;
            break;

        case 5:
            int status2;
            status2 = StackOperations::peek();
            if(status2 == -1)
                cout<<"\nCannot peek as Stack is Empty"<<endl;
            else
                cout<<"Top value: "<<status2<<endl;
            break;

        case 6:
            StackOperations::display();
            break;
        case 7:
            flag = false;
            break;

        default:
            cout << "Option not found" << endl;
            break;
        }
    } while (flag);
    return 0;
}
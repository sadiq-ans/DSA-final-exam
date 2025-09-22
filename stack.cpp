#include <iostream>
using namespace std;

#define MAX 5   // maximum size of stack

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << x << endl;
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop\n";
        } else {
            cout << arr[top--] << " popped from stack\n";
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    int size() {
        return top + 1;
    }
};

int main() {
    Stack st;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek (Top element)\n";
        cout << "4. Display\n";
        cout << "5. Size\n";
        cout << "6. isEmpty\n";
        cout << "7. isFull\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                st.push(value);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                st.peek();
                break;
            case 4:
                st.display();
                break;
            case 5:
                cout << "Current size: " << st.size() << endl;
                break;
            case 6:
                cout << (st.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
                break;
            case 7:
                cout << (st.isFull() ? "Stack is full" : "Stack is not full") << endl;
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 0);

    return 0;
}
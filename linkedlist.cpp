// Linked List

#include <iostream>

using namespace std;

class LinkedList {
private:
    int head;
    int *next;

public:
    LinkedList(int data)
    {
        this->head = data;
        this->next = NULL;
    }
};

void addAtStart();
void addAtAnyPosition();
void addAtEnd();
void displayAllElement();

int main() {

    int choice;
    int data;

    cout << "Choose any one :" << endl;
    cout << "1. Add Node at Start" << endl;
    cout << "2. Add Node at Any Postition" << endl;
    cout << "3. Add Node at End" << endl;
    cout << "4. Display all elements" << endl;
    cout << "5. Exits the code" << endl;

    cin >> choice;

    switch (choice =! 0) {
    case 1:
        addAtStart();
        break;

    case 2:
        addAtAnyPosition();
        break;

    case 3:
        addAtEnd();
        break; 

    case 4:
        displayAllElement();
        break;

    case 5:
        cout << "close the program!";
        return 0;
    }
    
    return 0;
}

void addAtStart() {
    int data;
    int *next;

    cout << "Enter the data value : ";
    cin >> data;

    cout << data;
}

void addAtAnyPosition() {
    int *next;
    int data;

    cout << "Enter the data value : ";
    cin >> data;

    cout << data;
}

void addAtEnd() {
    int data;
    int *next;

    cout << "Enter the data value :";
    cin >> data;

    cout << data;
}

void displayAllElement() {
    cout << "All Elements : " << endl;
}
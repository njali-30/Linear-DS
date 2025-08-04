#include <iostream>
using namespace std;

class Queue {
int arr[100];  
int f = -1, r = -1;  
const int max = 100;

public:
void empty();
void full();
void enqueue();
void dequeue();
void display();
};

void Queue::empty() {
if (f == -1 && r == -1) {
cout << "The queue is empty" << endl;
}
else
{
cout << "The queue is not empty" << endl;
}
}

void Queue::full() {
if (r == max - 1) {
cout << "The queue is full" << endl;
}
else
{
cout << "The queue is not full" << endl;
}
}

void Queue::enqueue() {
if (r == max - 1) {
cout << "Queue is full" << endl;
return;
}
if (f == -1) 
{
f = 0;
}

    cout << "Enter the element you want to insert: ";
    cin >> arr[++r];
}

void Queue::dequeue() {
    if (f == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Deleted element: " << arr[f] << endl;
    if (f == r) 
    {
        f = r = -1;
    } else {
        f++;
    }
}

void Queue::display() {
    if (f == -1) {
        cout << "The queue is empty" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = f; i <= r; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    Queue q;
    int choice;
    do {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Check if empty\n5. Check if full\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

switch (choice) {
case 1: q.enqueue(); break;
case 2: q.dequeue(); break;
case 3: q.display(); break;
case 4: q.empty(); break;
case 5: q.full(); break;
case 6: cout << "Exiting..." << endl; break;
default: cout << "Invalid choice" << endl; break;
}
}
while (choice != 6);
return 0;
}

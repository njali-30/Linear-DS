/* To implement the concept of linear and binary search to check whether a student attended training or not.*/
#include <iostream>
using namespace std;

int n, r;

class student {
    int roll;
    char name[10], address[100];
    
    public:
        void accept();
        void display();
        void Lsearch();
        void Bsearch();
}s[100];

void student::accept() {
    cout << "Enter the roll number, student name, and address: ";
    cin >> roll >> name >> address;
}

void student::display() {
    cout << "\n" << roll << "\t" << name << "\t" << address;
}

void student::Lsearch() {
    cout << "Enter the roll number of the student you want to search: ";
    cin >> r;
    int f = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].roll == r) {
            cout << "Attended training.\n";
            f = 1;
            break;
        }
    }
    if (f == 0) {
        cout << "Did not attend training.\n";
    }
}

void student::Bsearch() {
    // First, sort the students based on roll numbers
    student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].roll > s[j].roll) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    cout << "Enter the roll number of the student you want to search: ";
    cin >> r;

    int low = 0, high = n - 1, mid;
    int f = 0;
    
    while (low <= high) {
        mid = (low + high) / 2;
        if (s[mid].roll == r) {
            f = 1;
            break;
        } else if (s[mid].roll < r) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (f == 1) {
        cout << "Attended training.\n";
    } else {
        cout << "Did not attend training.\n";
    }
}

int main() {
    int c;
    cout << "Enter the total number of students: ";
    cin >> n;

    do {
        cout << "\nMENU\n" << "1. ACCEPT\n" << "2. DISPLAY\n" << "3. LINEAR SEARCH\n" << "4. BINARY SEARCH\n";
        cout << "Enter Choice (Enter 0 for exit): ";
        cin >> c;

        switch (c) {
            case 1:
                for (int i = 0; i < n; i++) {
                    s[i].accept();
                }
                break;

            case 2:
                cout << "\n" << "Roll NO." << "\t" << "Name" << "\t" << "Address";
                for (int i = 0; i < n; i++) {
                    s[i].display();
                }
                break;

            case 3:
                s[0].Lsearch();
                break;

            case 4:
                s[0].Bsearch();
                break;

            case 0:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (c != 0);

    return 0;
}

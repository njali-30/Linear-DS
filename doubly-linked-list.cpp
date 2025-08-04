#include <iostream>
using namespace std;

class MLS {
    int track;
    string name, artist;  // Data fields

    MLS *pre, *next;  // Address fields

public:
    void accept();
    void display();
    void count();
    void search();
    void update();
    void remove();
} *start = NULL, *tail = NULL;

void MLS::accept() {
    MLS *newnode, *temp;
    newnode = new MLS;

    cout << "\nEnter the track, name, artist: ";
    cin >> newnode->track >> newnode->name >> newnode->artist;

    newnode->next = NULL;
    newnode->pre = NULL;

    if (start == NULL) {
        start = newnode;
        tail = newnode;
    } else {
        temp = tail;
        temp->next = newnode;
        newnode->pre = temp;
        tail = newnode;
    }
}

void MLS::display() {
    MLS *temp = start;
    if (temp == NULL) {
        cout << "\nThe list is empty.\n";
        return;
    }
    while (temp != NULL) {
        cout << "Track\tName\tArtist";
        cout << "\n" << temp->track << "\t" << temp->name << "\t" << temp->artist;
        temp = temp->next;
    }
}

void MLS::count() {
    MLS *temp = start;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    cout << "\nTotal number of tracks: " << count << endl;
}

void MLS::search() {
    int track_no;
    cout << "\nEnter the track number to search: ";
    cin >> track_no;
    
    MLS *temp = start;
    while (temp != NULL) {
        if (temp->track == track_no) {
            cout << "\nTrack found: Track: " << temp->track << ", Name: " << temp->name << ", Artist: " << temp->artist << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "\nTrack not found.\n";
}

void MLS::update() {
    int track_no;
    cout << "\nEnter the track number to update: ";
    cin >> track_no;

    MLS *temp = start;
    while (temp != NULL) {
        if (temp->track == track_no) {
            cout << "\nEnter new details for Track " << track_no << ":\n";
            cout << "Name: ";
            cin >> temp->name;
            cout << "Artist: ";
            cin >> temp->artist;
            return;
        }
        temp = temp->next;
    }
    cout << "\nTrack not found.\n";
}

void MLS::remove() {
    int track_no;
    cout << "\nEnter the track number to remove: ";
    cin >> track_no;

    MLS *temp = start;
    while (temp != NULL) {
        if (temp->track == track_no) {
            if (temp->pre != NULL)
                temp->pre->next = temp->next;
            else
                start = temp->next; // Removing first node

            if (temp->next != NULL)
                temp->next->pre = temp->pre;
            else
                tail = temp->pre; // Removing last node

            delete temp;
            cout << "\nTrack " << track_no << " removed.\n";
            return;
        }
        temp = temp->next;
    }
    cout << "\nTrack not found.\n";
}

int main() {
    MLS mls;
    int choice;

    while (true) {
        cout << "\nMenu: ";
        cout << "\n1. Accept a new track";
        cout << "\n2. Display all tracks";
        cout << "\n3. Count total tracks";
        cout << "\n4. Search a track";
        cout << "\n5. Update a track";
        cout << "\n6. Remove a track";
        cout << "\n7. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                mls.accept();
                break;
            case 2:
                mls.display();
                break;
            case 3:
                mls.count();
                break;
            case 4:
                mls.search();
                break;
            case 5:
                mls.update();
                break;
            case 6:
                mls.remove();
                break;
            case 7:
                exit(0);
            default:
                cout << "\nInvalid choice.\n";
        }
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Hotel {
private:
    struct Node {
        int id;
        string name;
        Node* next;
    };
    Node* head;
public:
    Hotel() : head(0) {}
    ~Hotel();
    void insert();
    void show();
    void del();
};
Hotel::~Hotel() {
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}
void Hotel::insert() {
    Node* new_node = new Node;
    cout << "Enter Room ID: ";
    cin >> new_node->id;
    cout << "Enter Customer Name: ";
    cin.ignore();
    getline(cin, new_node->name);
    new_node->next = head;
    head = new_node;
    cout << "Room allocated.\n";
}
void Hotel::show() {
    if (!head) {
        cout << "No records to show.\n";
        return;
    }
    cout << "\nShowing All Records:\n";
    Node* current = head;
    while (current) {
        cout << "Room ID: " << current->id << "\nCustomer Name: " << current->name << "\n";
        current = current->next;
    }
}
void Hotel::del() {
    if (!head) {
        cout << "No records to delete.\n";
        return;
    }
    int t_id;
    cout << "Enter Room ID to delete: ";
    cin >> t_id;
    Node* current = head;
    Node* prev = 0;
    while (current) {
        if (current->id == t_id) {
            if (prev) {
                prev->next = current->next;
            } else {
                head = current->next;
            }
            delete current;
            cout << "Room deleted.\n";
            return;
        }
        prev = current;
        current = current->next;
    }
    cout << "Room not found.\n";
}
int main() {
    Hotel hotel;
    int choice;
    do {cout<<"                                                           ---Kheyber Shinwari Hotel---"<<endl;
        cout << "\n1) Allocate Room\n"
             << "2) Show Records\n"
             << "3) Delete Room\n"
             << "4) Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: hotel.insert(); break;
            case 2: hotel.show(); break;
            case 3: hotel.del(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}


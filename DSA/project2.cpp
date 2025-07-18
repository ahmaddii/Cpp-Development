#include<iostream>
#include<string>
using namespace std;

class MenuItem {
private:
    string itemName;
    int itemPrice;

public:
    // Constructor to initialize item details
    MenuItem(string name, int price) {
        itemName = name;
        itemPrice = price;
    }

    // Getter methods to retrieve item details
    string getName() const {
        return itemName;
    }

    int getPrice() const {
        return itemPrice;
    }
};

class Order {
private:
    static int totalOrders;

public:
    // Increment the total number of orders
    static void incrementTotalOrders() {
        totalOrders++;
    }

    // Get the total number of orders
    static int getTotalOrders() {
        return totalOrders;
    }
};

int Order::totalOrders = 0; // Initialize static data member

int main() {
    // Menu items with their prices
    MenuItem burger("Burger", 700);
    MenuItem pizza("Pizza", 1200);
    MenuItem sandwich("Sandwich", 540);
    MenuItem drink("Drink", 120);
    MenuItem salad("Salad", 900);

    // Variables to store user input
    string name, orderMore;
    int quantity, menu;

    cout<<"                                                           Welcome to our restaurant!\n";
    cout << "Please enter your name for the order: ";
    cin >> name;

    do {
        // Selection of item from the given menu
        cout << "Menu:\n";
        cout << "1. Burger\n";
        cout << "2. Pizza\n";
        cout << "3. Sandwich\n";
        cout << "4. Drink\n";
        cout << "5. Salad\n";
        cout << "Enter the menu number of the item you want to order: ";
        cin >> menu;

        // Process user's order
        switch (menu) {
            case 1:
                cout << "You have selected a Burger.\n";
                cout << "Please enter the quantity you want to order: ";
                cin >> quantity;
                cout << "Your total bill is: " << burger.getPrice() * quantity << endl;
                break;

            case 2:
                cout << "You have selected a Pizza.\n";
                cout << "Please enter the quantity you want to order: ";
                cin >> quantity;
                cout << "Your total bill is: " << pizza.getPrice() * quantity << endl;
                break;

            case 3:
                cout << "You have selected a Sandwich.\n";
                cout << "Please enter the quantity you want to order: ";
                cin >> quantity;
                cout << "Your total bill is: " << sandwich.getPrice() * quantity << endl;
                break;

            case 4:
                cout << "You have selected a Drink.\n";
                cout << "Please enter the quantity you want to order: ";
                cin >> quantity;
                cout << "Your total bill is: " << drink.getPrice() * quantity << endl;
                break;

            case 5:
                cout << "You have selected a Salad.\n";
                cout << "Please enter the quantity you want to order: ";
                cin >> quantity;
                cout << "Your total bill is: " << salad.getPrice() * quantity << endl;
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

        Order::incrementTotalOrders(); // Increment total orders

        cout << "Do you want to order anything else? (yes/no): ";
        cin >> orderMore;
    } while (orderMore == "yes" || orderMore == "Yes");

    cout << "Total orders placed: " << Order::getTotalOrders() << endl;
    cout << "Thank you for your order!\n";
    return 0;
}


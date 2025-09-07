#include <iostream>
#include <vector>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

class Inventory {
    vector<Item> items;
public:
    void addItem() {
        Item item;
        cout << "Enter Item ID: ";
        cin >> item.id;
        cout << "Enter Item Name: ";
        cin.ignore();
        getline(cin, item.name);
        cout << "Enter Quantity: ";
        cin >> item.quantity;
        items.push_back(item);
        cout << "Item added successfully.\n";
    }

    void displayItems() {
        if(items.empty()) {
            cout << "Inventory is empty.\n";
            return;
        }
        cout << "ID\tName\t\tQuantity\n";
        for(const auto& item : items) {
            cout << item.id << "\t" << item.name << "\t\t" << item.quantity << endl;
        }
    }

    void searchByID(int id) {
        for(const auto& item : items) {
            if(item.id == id) {
                cout << "Found: " << item.id << " - " << item.name << " (" << item.quantity << ")\n";
                return;
            }
        }
        cout << "Item with ID " << id << " not found.\n";
    }

    void searchByName(const string& name) {
        for(const auto& item : items) {
            if(item.name == name) {
                cout << "Found: " << item.id << " - " << item.name << " (" << item.quantity << ")\n";
                return;
            }
        }
        cout << "Item with name \"" << name << "\" not found.\n";
    }
};

int main() {
    Inventory inv;
    int choice;
    do {
        cout << "\nInventory Management System\n";
        cout << "1. Add Item\n2. Display Items\n3. Search by ID\n4. Search by Name\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                inv.addItem();
                break;
            case 2:
                inv.displayItems();
                break;
            case 3: {
                int id;
                cout << "Enter Item ID to search: ";
                cin >> id;
                inv.searchByID(id);
                break;
            }
            case 4: {
                string name;
                cout << "Enter Item Name to search: ";
                cin.ignore();
                getline(cin, name);
                inv.searchByName(name);
                break;
            }
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while(choice != 5);
    return 0;
}
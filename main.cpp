#include <iostream>
#include "bank_customer.h"
#include "buyer.h"

using namespace std;

enum PrimaryPrompt { LOGIN, REGISTER, EXIT };
enum SellerPrompt { UPGRADE, STATUS, BACK };
enum BankPrompt { ADD, VIEW, REMOVE, BACK };

void sellerMenu() {
    int choice;
    do {
        cout << "\n=== Seller Upgrade Menu ===" << endl;
        cout << "1. Apply for Seller Account" << endl;
        cout << "2. Check Seller Status" << endl;
        cout << "3. Back" << endl;
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Applying for Seller Account..." << endl;
                break;
            case 2:
                cout << "Checking Seller Status..." << endl;
                break;
            case 3:
                cout << "Returning to main menu..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 3);
}

void bankMenu() {
    int choice;
    do {
        cout << "\n=== Bank Account Functions ===" << endl;
        cout << "1. Add Bank Account" << endl;
        cout << "2. View Bank Account" << endl;
        cout << "3. Remove Bank Account" << endl;
        cout << "4. Back" << endl;
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Adding Bank Account..." << endl;
                break;
            case 2:
                cout << "Viewing Bank Account..." << endl;
                break;
            case 3:
                cout << "Removing Bank Account..." << endl;
                break;
            case 4:
                cout << "Returning to main menu..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);
}

int main() {
    PrimaryPrompt prompt = LOGIN;
    while (prompt != EXIT) {
        cout << "\n=== Main Menu ===" << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Exit" << endl;
        cout << "4. Seller Upgrade" << endl;
        cout << "5. Bank Account" << endl;
        cout << "Select an option: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Login selected." << endl;
                break;
            case 2:
                cout << "Register selected." << endl;
                break;
            case 3:
                cout << "Exiting program." << endl;
                prompt = EXIT;
                break;
            case 4:
                sellerMenu();
                break;
            case 5:
                bankMenu();
                break;
            default:
                cout << "Invalid choice, try again." << endl;
        }
    }
    return 0;
}

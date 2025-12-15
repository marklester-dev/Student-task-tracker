#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    char again;
    string history[100];

    int count = 0;

    do {
        cout << "================Calculator================" << endl;
        cout << "[1] Addition" << endl;
        cout << "[2] Subtraction" << endl;
        cout << "[3] Multiplication" << endl;
        cout << "[4] Division" << endl;
        cout << "[5] History" << endl;
        cout << "[6] Exit" << endl;
        cout << "==========================================" << endl;

        cout << "Enter your Choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter 1st Number: ";
            cin >> num1;
            cout << "Enter 2st Number: ";
            cin >> num2;

            if (choice == 1) {
                result = num1 + num2;
                cout << "Result: " << result << endl;
                history[count++] = to_string(num1) + " + " + to_string(num2) + " = " + to_string(result);
            }
            else if (choice == 2) {
                result = num1 - num2;
                cout << "Result: " << result << endl;
                history[count++] = to_string(num1) + " - " + to_string(num2) + " = " + to_string(result);
            }
            else if (choice == 3) {
                result = num1 * num2;
                cout << "Result: " << result << endl;
                history[count++] = to_string(num1) + " * " + to_string(num2) + " = " + to_string(result);
            }
            else if (choice == 4) {
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                    history[count++] = to_string(num1) + " / " + to_string(num2) + " = " + to_string(result);
                }
                else {
                    cout << "Cannot divide by zero!" << endl;
                }
            }
        }
        else if (choice == 5) {
            cout << "\n====== Calculation History ======" << endl;
            if (count == 0) {
                cout << "No history yet!" << endl;
            }
            else {
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << history[i] << endl;
                }
            }
            cout << "=================================" << endl;
        }
        else if (choice == 6) {
            cout << "Thank you for using the calculator!" << endl;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> again;
        cout << endl;

    } while (again == 'y' || again == 'Y');

    cout << "Thank you for using the calculator!" << endl;
    return 0;
}

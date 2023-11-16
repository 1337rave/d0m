#include "header.h"
#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "Choose a task to solve (1-6):\n";
    cout << "1. Remove a character at a specified position\n";
    cout << "2. Remove all occurrences of a specified character\n";
    cout << "3. Insert a character at a specified position\n";
    cout << "4. Replace dots with exclamation marks\n";
    cout << "5. Count occurrences of a character in a string\n";
    cout << "6. Count letters, digits, and other characters in a string\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        // Task 1
        string inputString;
        cout << "Enter a string: ";
        cin >> inputString;
        int positionToRemove;
        cout << "Enter the position to remove: ";
        cin >> positionToRemove;
        removeCharacterAt(inputString, positionToRemove);
        cout << "Result after removing character at position: " << inputString << endl;
        break;
    }
    case 2: {
        // Task 2
        string inputString;
        cout << "Enter a string: ";
        cin >> inputString;
        char targetChar;
        cout << "Enter the character to remove: ";
        cin >> targetChar;
        removeAllOccurrences(inputString, targetChar);
        cout << "Result after removing all occurrences: " << inputString << endl;
        break;
    }
    case 3: {
        // Task 3
        string inputString;
        cout << "Enter a string: ";
        cin >> inputString;
        int positionToInsert;
        cout << "Enter the position to insert: ";
        cin >> positionToInsert;
        char charToInsert;
        cout << "Enter the character to insert: ";
        cin >> charToInsert;
        insertCharacterAt(inputString, positionToInsert, charToInsert);
        cout << "Result after inserting character at position: " << inputString << endl;
        break;
    }
    case 4: {
        // Task 4
        string inputString;
        cout << "Enter a string with dots: ";
        cin >> inputString;
        replaceDotsWithExclamation(inputString);
        cout << "Result after replacing dots: " << inputString << endl;
        break;
    }
    case 5: {
        // Task 5
        string inputString;
        cout << "Enter a string: ";
        cin >> inputString;
        char targetChar;
        cout << "Enter the character to count: ";
        cin >> targetChar;
        int occurrences = countOccurrences(inputString, targetChar);
        cout << "The character '" << targetChar << "' appears " << occurrences << " times in the string." << endl;
        break;
    }
    case 6: {
        // Task 6
        string inputString;
        cout << "Enter a string: ";
        cin >> inputString;
        int letters, digits, others;
        countCharacterTypes(inputString, letters, digits, others);
        cout << "Letters: " << letters << ", Digits: " << digits << ", Others: " << others << endl;
        break;
    }
    default:
        cout << "Invalid choice. Exiting program.\n";
        break;
    }

    return 0;
}

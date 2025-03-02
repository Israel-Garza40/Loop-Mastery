#include <iostream>
#include <string>

using namespace std;

// Function to calculate factorial using a while loop
int factorial(int num) {
    int result = 1;
    while (num > 1) {
        result *= num;
        num--;
    }
    return result;
}

// Function to print a number pyramid using nested for loops
void numberPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Function to calculate the sum of even or odd numbers using a do-while loop
int sumEvenOdd(int start, int end, bool even) {
    int sum = 0;
    int num = start;
    do {
        if (even && num % 2 == 0) {
            sum += num;
        } else if (!even && num % 2 != 0) {
            sum += num;
        }
        num++;
    } while (num <= end);
    return sum;
}

// Function to reverse a string using a while loop
string reverseString(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        swap(str[left], str[right]);
        left++;
        right--;
    }
    return str;
}

int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Factorial Calculator\n";
        cout << "2. Number Pyramid\n";
        cout << "3. Sum of Even or Odd Numbers\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                cout << "Enter a number: ";
                cin >> num;
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            }
            case 2: {
                int rows;
                cout << "Enter number of rows: ";
                cin >> rows;
                numberPyramid(rows);
                break;
            }
            case 3: {
                int start, end;
                char type;
                cout << "Enter start and end values: ";
                cin >> start >> end;
                cout << "Sum of (E)ven or (O)dd numbers? ";
                cin >> type;
                bool even = (type == 'E' || type == 'e');
                cout << "Sum: " << sumEvenOdd(start, end, even) << endl;
                break;
            }
            case 4: {
                string str;
                cout << "Enter a string: ";
                cin.ignore(); // Ignore leftover newline character
                getline(cin, str);
                cout << "Reversed string: " << reverseString(str) << endl;
                break;
            }
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
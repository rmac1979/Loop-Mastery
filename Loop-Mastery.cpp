/*
Author: Ryan McCamy
Assignment: Loop-Mastery
Description: This prgram is a menu-driven utility program that allows users to perform various mathematical and string-based operations using different types of loops
*/

#include <iostream>
#include <string>
using namespace std;

// Function to calculate factorial using a while loop
int factorial(int n) {
    int result = 1;
    while (n > 1) {
        result *= n;
        n--;
    }
    return result;
}

// Function to print a number pyramid using nested for loops
void numberPyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

// Function to calculate sum of even or odd numbers using do-while loop
int sumEvenOdd(int limit, bool isEven) {
    int sum = 0, num = isEven ? 2 : 1;
    do {
        sum += num;
        num += 2;
    } while (num <= limit);
    return sum;
}

// Function to reverse a string using a while loop
string reverseString(string str) {
    int i = 0, j = str.length() - 1;
    while (i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}

int main() {
    int choice;
    do {
        cout << "\n========= Interactive Utility Program =========" << endl;
        cout << "1. Factorial Calculator" << endl;
        cout << "2. Number Pyramid" << endl;
        cout << "3. Sum of Even or Odd Numbers" << endl;
        cout << "4. Reverse a String" << endl;
        cout << "5. Exit" << endl;
        cout << "==============================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                int num;
                cout << "Enter a positive integer: ";
                cin >> num;
                if (num < 0) {
                    cout << "Factorial is not defined for negative numbers." << endl;
                } else {
                    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
                }
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
                int limit;
                char type;
                cout << "Calculate sum of (e)ven or (o)dd numbers? ";
                cin >> type;
                cout << "Enter upper limit: ";
                cin >> limit;
                bool isEven = (type == 'e' || type == 'E');
                cout << "Sum of " << (isEven ? "even" : "odd") << " numbers up to " << limit << ": " << sumEvenOdd(limit, isEven) << endl;
                break;
            }
            case 4: {
                string input;
                cout << "Enter a string: ";
                cin >> input;
                cout << "Reversed string: " << reverseString(input) << endl;
                break;
            }
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    
    return 0;
}
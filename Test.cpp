#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function Declarations
int factorial(int n);
void printArray(int arr[], int size);
void swap(int *a, int *b);

// Structure
struct Person {
    string name;
    int age;
};

int main() {
    // Array
    int numbers[] = {5, 2, 7, 1, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // String Algorithm
    string str = "Hello, World!";
    cout << "Original String: " << str << endl;
    for (char &c : str) {
        if (isalpha(c)) {
            if (islower(c))
                c = toupper(c);
            else
                c = tolower(c);
        }
    }
    cout << "String after toggling case: " << str << endl;

    // Control Structures
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    } else {
        cout << "Factorial is not defined for negative numbers." << endl;
    }

    // Pointer Variable and Address Operator
    int x = 10, y = 20;
    int *ptr_x = &x, *ptr_y = &y;
    cout << "Before swapping - x: " << x << ", y: " << y << endl;
    swap(ptr_x, ptr_y);
    cout << "After swapping - x: " << x << ", y: " << y << endl;

    return 0;
}

// Function Definitions
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


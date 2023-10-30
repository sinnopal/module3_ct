#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declaring variables
    int input1, input2, input3;

    // Three integer inputs from the user
    cout << "Enter three integer inputs: ";
    cin >> input1 >> input2 >> input3;

    // Creating pointers and allocating memory dynamically
    int* ptr1 = new int(input1);
    int* ptr2 = new int(input2);
    int* ptr3 = new int(input3);

    // Storing values in the dynamic memory through the pointers
    *ptr1 = input1;
    *ptr2 = input2;
    *ptr3 = input3;

    // Displaying the contents of variables and pointers
    cout << "Values entered: " << input1 << ", " << input2 << ", " << input3 << endl;
    cout << "Pointers to dynamic memory: " << *ptr1 << ", " << *ptr2 << ", " << *ptr3 << endl;

    // Deallocating the dynamic memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
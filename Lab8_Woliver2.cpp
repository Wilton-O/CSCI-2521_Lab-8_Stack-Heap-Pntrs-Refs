/**
 * @file Lab8_Woliver2.cpp
 * @author Wilton Oliver
 * @date 2026-03-24
 * @brief Demonstrates stack vs heap memory and the use of pointers and references.
 */


#include <iostream>

using namespace std;


/**
 * @brief Entry point for the memory demonstration.
 * @return 0 to indicate success.
 */
int main() {
    // Initialize Stack int variable
    int stackInt = 14;

    // Initialize Heap int variable
    int *heapInt = new int(28);


    // Initialize Pointer to Stack int variable
    int *ptrToStack = &stackInt;

    // Initialize Reference to Stack int variable
    int &refToStack = stackInt;


    // Print Stack int variable value and its address
    cout << "Stack Variable (stackInt):" << endl;
    cout << "  Value:   " << stackInt << endl;
    cout << "  Address: " << &stackInt << endl << endl;

    // Print Heap int variable value and its address
    cout << "Heap Variable (heapInt):" << endl;
    cout << "  Value:   " << *heapInt << endl;
    cout << "  Address: " << heapInt << endl << endl;

    // Print Stack int variable pointer and its stored address
    cout << "Pointer to Stack (ptrToStack):" << endl;
    cout << "  Value Pointed To: " << ptrToStack << endl;
    cout << "  Address Stored:   " << &ptrToStack << endl << endl;

    // Print Stack int variable reference and its stored address
    cout << "Reference to Stack (refToStack):" << endl;
    cout << "  Value Pointed To: " << refToStack << endl;
    cout << "  Address Stored:   " << &refToStack << endl << endl;


    // Clean-up - Prevent memory leak
    delete heapInt;


    // Return Value - indication of success
    return 0;
}


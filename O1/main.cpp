//
// This is example code from Chapter 2.2 "The classic first program" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//
// This program outputs the message "Hello, World!" to the monitor

#include "std_lib_facilities.h"

int maxOF(int a, int b) {
    if (a > b) {
        cout << "a is greater than b" << endl;
        return a;
    } else {
        cout << "b is greater than a" << endl;
        return b;
    }
}

int fibonacci(int n) {
    int a = 0;
    int b = 1;
    cout << "Fibbonacci numbers: " << endl;
    for (int i = 1; i < n+1; i++) {
        cout << i  << b << endl;
        int temp = b;
        b += a;
        a = temp;
    }
    cout << "-----" << endl;
    return b;

}
//oppgave d
int squareNumberSum(int n){
    int totalSum = 0;
    for (int i = 1; i < n+1; i++) {
        totalSum += i*i;
        cout << i * i << endl;
    }
    cout << totalSum << endl;
    return totalSum;
}
//oppgave e
void TriangularNumbersbelow(int n){
    int acc = 1;
    int num = 1;
    cout << "Triangular numbers below " << n << ":" << endl;
    while (acc < n){
        cout << num << " " << acc << endl;
        acc += num;
        num++;
    }
}



//------------------------------------------------------------------------------'

// C++ programs start by executing the function main
int main() {
    // Show a nice message in the Terminal window
    cout << "Hello, World!" << endl;
    cout << "Oppgave a" << endl;
    cout << maxOF(5, 6) << endl;
    cout << "Oppgave b" << endl;
    cout << fibonacci(5) << endl;
    cout << "Oppgave d" << endl;
    cout << squareNumberSum(5) << endl;



    // This lets the operating system (Windows, Mac, Linux, etc.) know that the program
    // did not encounter any errors
    return 0;
}

//------------------------------------------------------------------------------

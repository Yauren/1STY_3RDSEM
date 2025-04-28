/*
Allocate & Initialize

Prompts the user for an integer n (n > 0).
Dynamically allocates an array of n integers.
Fills the array so that element i (0-based) equals (i + 1) * 3.
Prints all n values on one line, space-separated.
Properly frees the allocated memory before exiting.
*/

#include <iostream>

using namespace std;

void checkInteger(int &n);

int main(){

    int n;

    do{
        cout << "Enter n: ";
        cin >> n;
        checkInteger(n);
    } while(n < 1);

    int* arr = new int[n];

    cout << "Array contents: ";

    for (int i = 0; i < n; i++){
        cout << (i+1)*3 << " ";
    }

    delete[] arr;

    return 0;
}

void checkInteger(int &n){
    if(n <= 0){
        cout << "Invalid! Input number greater than zero" << endl;
    }
}
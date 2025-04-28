/*
In-Place Reverse

Reads an integer n (n > 0), then reads n integers from the user into a dynamically allocated array.
Reverses the array in place (no extra arrays).
Prints the reversed sequence on one line.
Deletes the array and ends.
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

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];      
    }

    cout << "Reversed: ";
    for (int i = 1; i <= n; i++){
        cout << arr[n - i] << " ";
    }

    delete[] arr;

    return 0;
}

void checkInteger(int &n){
    if(n <= 0){
        cout << "Invalid! Input number greater than zero" << endl;
    }
}
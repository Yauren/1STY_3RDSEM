/*
Filter Even Numbers

Prompts the user for an integer n (n > 0).
Dynamically allocates an array of n integers.
Reads n integer values into that array.
Counts how many of those values are even.
Dynamically allocates a second array just big enough to hold all the even numbers.
Copies each even number from the first array into the second.
Prints the list of even numbers on one line (or “None” if there aren’t any).
Properly deletes both arrays before exiting.
*/

#include <iostream>

using namespace std;

void checkInteger(int &n);

int main(){

    int n, even = 0;

    do{
        cout << "Enter n: ";
        cin >> n;
        checkInteger(n);
    } while (n < 1);

    cout << "Enter " << n << " numbers: ";
    int* arr = new int[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            even += 1;
        }
    }

    int* arr2 = new int[even];

    int j = 0;
    
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0){
            arr2[j] = arr[i];
            j++;
        }
    }

    cout << "Even numbers: ";

    if (even > 0){
        for (int i = 0; i < even; i++){
            cout << arr2[i] << " ";
        }
    }
    else{
        cout << "None" << endl;
    }

    cout << endl;

    delete[] arr;
    delete[] arr2;
    return 0;
}

void checkInteger(int &n){
    if(n <= 0){
        cout << "Invalid! Input number greater than zero" << endl;
    }
}
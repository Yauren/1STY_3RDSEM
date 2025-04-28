#include <iostream>

using namespace std;

void InputIndexValue(int array[], int n);
void SumValueArray(int array[], int n);

int main(){
    int n, choice;

    cout << "Enter the length of an array: ";
    cin >> n;

    int array[n];
    system("CLS");

    do{

        cout << "-----------------" << endl;
        cout << "  Sum of Array" << endl;
        cout << "-----------------" << endl;
            cout << "[1] - Input index value" << endl;
            cout << "[2] - Check the Sum value of the array" << endl;
            cout << "[3] - Exit" << endl;
    
            cout << "\nEnter choice: ";
            cin >> choice;
    
    
        switch (choice){
            case 1: InputIndexValue(array, n);
            break;
            case 2: SumValueArray(array, n);
            break;
            case 3: return 0;
    
            default:{
                cout << "Enter valid choice!";
                return 0;
            }
        }

    }while (choice != 3);

    
    return 0;
}

void InputIndexValue(int array[], int n){
    system("CLS");
    for (int i = 0; i < n; i++){
        cout << "Enter the value for index " << i << " : ";
        cin >> array[i];
    }
    cout << "\nDone inputting the index value" << endl;
    system("pause");    
    system("CLS");
}

void SumValueArray(int array[], int n){
    system("CLS");
    int sum = 0;
    for(int i=0; i < n; i++){
        sum += array[i];
    }
    cout << "The sum value of the array: " << sum << endl;
    system("pause");    
    system("CLS");
}
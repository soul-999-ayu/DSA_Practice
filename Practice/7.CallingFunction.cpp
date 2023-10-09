//Function practice
#include <iostream>
#include <math.h>

using namespace std;

//Defining function
int square(int a){
    return pow(a, 2);
}

void changeValue(int &r, int value){
    r=value;
}

void swap(int *n1, int *n2){
    int temp = (*n1);
    (*n1) = (*n2);
    (*n2) = temp;
}

int main() {
    
    //Creating variable
    int num, num1, num2 = 0, num3 = 20, num4 = 40;
    
    //Inputtiing values
    cout << "Enter a number to square: ";
    cin >> num;
    
    //Printing values (call by value)
    cout << endl << "Square of " << num << " is: " << square(num);
    
    //Call by reference example
    cout << endl << endl << "Old value: " << num2;
    cout << endl << "Enter a number to modify: ";
    cin >> num1;
    
    //Changing value (call by reference)
    changeValue(num2, num1);
    
    //Printing values
    cout << endl << "After changing the value: " << num2;
    
    //Call by address example
    cout << endl << endl << "Before swap: num3=" << num3 << " and num4=" << num4;
    
    //Swaping values
    swap(&num3, &num4);
    
    //Printing values
    cout << endl << "After swap: num3=" << num3 << " and num4=" << num4;
    
    return 0;
}
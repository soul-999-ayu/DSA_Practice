//Function practice
#include <iostream>
#include <math.h>

using namespace std;

//Defining function
int square(int a){
    return pow(a, 2);
}

int main() {
    
    //Creating variable
    int num;
    
    //Inputtiing values
    cout << "Enter a number: ";
    cin >> num;
    
    //Printing values
    cout << endl << "Square of " << num << " is: " << square(num);

    return 0;
}
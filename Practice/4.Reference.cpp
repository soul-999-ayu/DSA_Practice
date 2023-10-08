//Reference practice code
#include <iostream>

using namespace std;

//Creating function
void change(int &c, int value){
    c=value;
}

int main() {
    //Creating variable and reference
    int a = 10;
    int &r = a;
    
    //Before changing value
    cout << "Value before changing:" << endl;
    cout << "Value of a " << a << endl;
    cout << "Value of a (using reference r): " << r << endl;
    
    //Changing value using reference
    change(a, 69);
    
    //After changing value
    cout << endl << "Value after changing:" << endl;
    cout << "Value of a " << a << endl;
    cout << "Value of a (using reference r): " << r << endl;
    
    return 0;
}

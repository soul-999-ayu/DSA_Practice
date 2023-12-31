//Pointer practice code
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    //Creating variable and pointer
    int a = 10;
    int *p = &a;
    
    //Printing values
    cout << "Value of a " << a << endl;
    cout << "Value of a (using pointer p): " << *p << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Address of a (using pointer p): " << p << endl;
    
    //C Code
    int *p1 = (int *) malloc(sizeof(int)); //Allocating memory
    *p1=100; //Assigning value
    cout << endl << "Value of p1: " << *p1 << endl;
    
    //C++ Code
    int *p2 = new int; //Allocating memory
    *p2=200; //Assigning value
    cout << "Value of p2: " << *p2 << endl;
    
    //Array example
    int array[5] = {10, 20, 30, 40, 50};
    int *arrayP = array;
    
    for(int i=0; i<5; i++){
        cout << endl << "Array value at array[" << i << "]: " << array[i];
        cout << endl << "Array value at arrayR[" << i << "]: " << arrayP[i] << endl;
    }

    //Deallocating memory
    free(p1);
    delete(p2);

    return 0;
}

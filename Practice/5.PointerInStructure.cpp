//Pointer practice code
#include <iostream>
#include <stdlib.h>

using namespace std;

//Creating structure
struct rect{
    int length;
    int breadth;
};

int main() {
    //Creating variables and pointer
    struct rect r = {10, 20};
    struct rect *p = &r;
    
    //Printing values
    cout << "Length: " << r.length << endl;
    cout << "Length (using pointer): " << p->length << endl;
    cout << "Breadth: " << r.breadth << endl;
    cout << "Breadth (using pointer): " << p->breadth << endl;
    
    //C Code (Dynamic allocation)
    struct rect *p1 = (struct rect *)malloc(sizeof(struct rect));
    p1->length = 69;
    p1->breadth = 96;
    cout << endl << "Length of p1: " << p1->length << endl;
    cout << "Breadth of p1: " << p1->breadth << endl;
    
    //C++ Code (Dynamic allocation)
    struct rect *p2 = new struct rect;
    p2->length = 999;
    p2->breadth = 420;
    cout << endl << "Length of p2: " << p2->length << endl;
    cout << "Breadth of p2: " << p2->breadth;
    
    //Deallocating memory
    free(p1);
    delete(p2);
    
    return 0;
}

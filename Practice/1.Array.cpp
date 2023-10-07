// Array Practice
#include <iostream>

using namespace std;

int main() {
    
    int no_of_students = 2;
    
    int Roll_no[no_of_students];
    string name[no_of_students];
    int id[no_of_students];
    
    for(int i=0; i<no_of_students; i++){
        cout << endl;
        cout << endl << "Enter Roll no: ";
        cin >> Roll_no[i];
        cout << endl << "Enter Name: ";
        cin >> name[i];
        cout << endl << "Enter ID: ";
        cin >> id[i];
    }
    
    cout << endl;
    
    for(int i=0; i<no_of_students; i++){
        cout << endl << "Roll no of student " << i+1 << ": " << Roll_no[i];
        cout << endl << "Name of student " << i+1<< ": " << name[i];
        cout << endl << "ID of student " << i+1 << ": " << id[i];
    }

    return 0;
}
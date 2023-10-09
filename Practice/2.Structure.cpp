// Structure Practice
#include <iostream>

using namespace std;

int main() {

    //Creating structure
    struct Student{
        int Roll_no;
        string name;
        int id;
    };
    
    int no_of_students = 2;

    //Creating structure array
    struct Student all_student[no_of_students];

    //Inserting values
    for(int i=0; i<no_of_students; i++){
        cout << endl;
        cout << endl << "Enter Roll no of student " << i+1 << ": ";
        cin >> all_student[i].Roll_no;
        cout << endl << "Enter Name of student " << i+1 << ": ";
        cin >> all_student[i].name;
        cout << endl << "Enter ID of student " << i+1 << ": ";
        cin >> all_student[i].id;
    }
    
    cout << endl;

    //Printing values
    for(int i=0; i<no_of_students; i++){
        cout << endl << "Roll no of student " << i+1 << ": " << all_student[i].Roll_no;
        cout << endl << "Name of student " << i+1<< ": " << all_student[i].name;
        cout << endl << "ID of student " << i+1 << ": " << all_student[i].id;
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;
    struct student {
        string name;
        int age;
        int id;
        double height;
    };
int main() {
    struct student Classroom[3];

    Classroom[0].name = "Rex";
    Classroom[0].age = 10;
    Classroom[0].id = 1000;
    Classroom[0].height = 5.5;

    Classroom[1].name = "Ziyi";
    Classroom[1].age = 11;
    Classroom[1].id = 1001;
    Classroom[1].height = 5.2;

    Classroom[2].name = "Ocean";
    Classroom[2].age = 11;
    Classroom[2].id = 1002;
    Classroom[2].height = 4.5;

    for(int i = 0; i<3; i++){
        cout << "Name: " << Classroom[i].name << endl;
        cout << "Age: " << Classroom[i].age << endl;
        cout << "ID: " << Classroom[i].id << endl;
        cout << "Height: " << Classroom[i].height << endl;
        cout << "----------------------------------------" << endl;
    }
    return 0;
}
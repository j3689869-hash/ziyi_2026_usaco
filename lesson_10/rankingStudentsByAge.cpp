#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct student {
    string name;
    int age;
    int id;
    double height;
    int score;
};

bool compareByAge(student a, student b) {
    return a.age < b.age;
}

bool compareByHeightThenScore(student a, student b) {
    if(a.height != b.height){
        return a.height > b.height;  // taller first
    }
    return a.score > b.score;        // if same height, higher score first
}

bool compareByName(student a, student b) {
    return a.name < b.name;
}

void printStudent(student s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "ID: " << s.id << endl;
    cout << "Height: " << s.height << endl;
    cout << "Score: " << s.score << endl;
    cout << "----------------------------------------" << endl;
}

int main() {
    struct student Classroom[3];

    Classroom[0].name = "Rex";
    Classroom[0].age = 10;
    Classroom[0].id = 1000;
    Classroom[0].height = 5.5;
    Classroom[0].score = 88;

    Classroom[1].name = "Ziyi";
    Classroom[1].age = 11;
    Classroom[1].id = 1001;
    Classroom[1].height = 5.5;
    Classroom[1].score = 100;

    Classroom[2].name = "Ocean";
    Classroom[2].age = 12;
    Classroom[2].id = 1002;
    Classroom[2].height = 4.5;
    Classroom[2].score = 98;



    sort(Classroom, Classroom + 3, compareByName);

    for(int i = 0; i < 3; i++){
        printStudent(Classroom[i]);
    }

    return 0;
}
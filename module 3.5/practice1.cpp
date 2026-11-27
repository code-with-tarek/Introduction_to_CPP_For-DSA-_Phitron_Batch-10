// Question: Create three static objects with the 
// help of the constructor of the following class.
// Student
// {
// 	name;
// 	roll;
// 	section;
// 	math_marks;
// 	cls;
// }
// Then compare those 3 objects and print who got
// the highest math_marks and print his/her name.


#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    // Constructor
    Student(string name, int roll, char section, int math_marks, int cls) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main() {
    // ৩টি static object তৈরি (constructor-এর মাধ্যমে)
    static Student s1("Rahim", 101, 'A', 85, 10);
    static Student s2("Karim", 102, 'B', 94, 10);
    static Student s3("Nusrat", 103, 'A', 91, 10);

    // সর্বোচ্চ math_marks বের করার লজিক
    Student top_student = s1;

    if (s2.math_marks > top_student.math_marks) {
        top_student = s2;
    }
    if (s3.math_marks > top_student.math_marks) {
        top_student = s3;
    }

    cout << top_student.name << "\n";

    return 0;
}
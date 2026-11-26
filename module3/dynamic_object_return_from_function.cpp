#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    double gpa;

    student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;    // (*this).gpa = gpa;

    }
};

student* fun()
{
    student* rahim = new student(10,10,4.56);
    return rahim;
}

int main() {

    student* p = fun();

    cout << (*p).cls <<" " << p->roll << " " << p->gpa << endl;
    return 0;
}
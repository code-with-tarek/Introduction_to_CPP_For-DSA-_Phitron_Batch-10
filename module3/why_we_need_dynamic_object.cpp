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
    student rahim(10,10,4.56);
    student* p = &rahim;
    return p;
}

int main() {

    student* p = fun();

    cout << (*p).cls <<" " << p->roll << " " << p->gpa << endl;
    return 0;
}
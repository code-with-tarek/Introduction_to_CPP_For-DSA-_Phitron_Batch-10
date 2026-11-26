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
int main() {

    student rahim(5,10,4.56);

    cout << rahim.cls <<" " << rahim.roll << " " << rahim.gpa << endl;
    return 0;
}
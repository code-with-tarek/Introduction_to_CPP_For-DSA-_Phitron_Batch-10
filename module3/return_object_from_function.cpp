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

student fun()
{
    student rahim(11,10,4.56);
    return rahim;
}
int main() {

    student obj = fun();

    cout << obj.cls <<" " << obj.roll << " " << obj.gpa << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    int cls;
    int roll;
    double gpa;

    student(int c, int r, double g)
    {
        cls = c;
        roll = r;
        gpa = g;
    }
};
int main() {
    // int r;
    // int c;
    // double g;
    // cin >> c >> r >> g;
    // student rahim(c,r,g);          // user input

    // student rahim;
    // cin >>rahim.cls >> rahim.roll >> rahim.gpa;       // No need to constructor
    
    student rahim(5,10,4.56);

    cout << rahim.cls <<" " << rahim.roll << " " << rahim.gpa << endl;
    return 0;
}
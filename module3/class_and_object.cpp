#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];    // 100 byte
    int roll;           // 4 byte
    double gpa;       // 8 byte
};

// int main() {
//     student a;
//     a.roll = 45;
//     a.gpa = 4.56;
//     char tem[100] = "sakib";
//     strcpy (a.name,tem);

//     cout << a.name <<" " << a.roll << " " << a.gpa << endl;

//     return 0;
// }

// int main(){
//     student a;
//     cin >> a.name >> a.roll >> a.gpa;

//     cout << a.name <<" " << a.roll << " " << a.gpa << endl;
//     return 0;
// }

int main(){
    student a;
    cin.getline(a.name,100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    //getline / ignore

    cout << a.name <<" " << a.roll << " " << a.gpa << endl;
    return 0;
}
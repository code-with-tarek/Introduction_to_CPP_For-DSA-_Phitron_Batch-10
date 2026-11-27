// Question: Create a dynamic object named dhoni of 
// the following class. Don’t use a constructor here, that means you need to fill the data by yourself.
// Cricketer
// {
// 	jersey_no;
// 	country;
// }
// Then make another dynamic object named kohli 
// and copy the data of the dhoni object to kohli and 
// after that delete the dhoni object. Then print the jersey_no and country of kohli object.
// Note: At first try to do this, kohli=dhoni and see 
// if it gives the correct output. If not, then think deeply why it didn’t work and try to copy the data manually like kohli->jersey_no=dhoni->jersey_no; 



// #include <bits/stdc++.h>
// using namespace std;

// class Cricketer {
// public:
//     int jersey_no;
//     string country;
// };

// int main() {
//     // ১. dhoni নামের dynamic object তৈরি ও ম্যানুয়ালি ডেটা বসানো
//     Cricketer *dhoni = new Cricketer;
//     dhoni->jersey_no = 7;
//     dhoni->country = "India";

//     // ২. kohli নামের আরেকটি dynamic object তৈরি
//     Cricketer *kohli = new Cricketer;

//     // ৩. dhoni-এর ডেটা ম্যানুয়ালি kohli-তে কপি করা
//     kohli->jersey_no = dhoni->jersey_no;
//     kohli->country = dhoni->country;

//     // ৪. dhoni অবজেক্ট ডিলিট করা
//     delete dhoni;

//     // ৫. kohli-এর ডেটা প্রিন্ট করা
//     cout << kohli->jersey_no << " " << kohli->country << "\n";

//     // কাজ শেষে kohli-ও ডিলিট করা ভালো অভ্যাস
//     delete kohli;

//     return 0;
// }


#include <bits/stdc++.h>    // code run hobe na
using namespace std;

class Cricketer {
public:
    int jersey_no;
    string country;
};

int main() {
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "India";

    Cricketer *kohli = new Cricketer;

    // শুধু পয়েন্টার কপি করা হচ্ছে (ভেতরের ডেটা নয়)
    kohli = dhoni;

    // dhoni ডিলিট করার সাথে সাথে ওই ঠিকানার ডেটা মুছে যাবে
    delete dhoni;

    // মুছে যাওয়া মেমোরি এক্সেস করার চেষ্টা (Undefined Behavior)
    cout << kohli->jersey_no << " " << kohli->country << "\n";

    return 0;
}
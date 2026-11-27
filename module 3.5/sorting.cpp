// Given a number N and an array A of N numbers. Print the numbers after sorting them.

// Note:

// Don't use built-in-functions.
// try to solve it with bubble sort algorithm or Selection Sort.
// for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
// Input
// First line contains a number N (0 < N < 103) number of elements.

// Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

// Output
// Print the numbers after sorting them.

// Examples
// InputCopy
// 3
// 3 1 2
// OutputCopy
// 1 2 3 
// InputCopy
// 4
// 5 2 7 3
// OutputCopy
// 2 3 5 7 



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Selection Sort
//     for (int i = 0; i < n - 1; i++) {
//         int min_idx = i;
//         for (int j = i + 1; j < n; j++) {
//             if (a[j] < a[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         // a[i] এবং a[min_idx] সোয়াপ করা
//         int temp = a[i];
//         a[i] = a[min_idx];
//         a[min_idx] = temp;
//     }

//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     // Bubble Sort
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (a[j] > a[j + 1]) {
//                 int temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//         cout << a[i] << " ";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // শুরু থেকে শেষ পর্যন্ত ছোট থেকে বড় (Ascending) ক্রমে সাজানো
    sort(a, a + n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
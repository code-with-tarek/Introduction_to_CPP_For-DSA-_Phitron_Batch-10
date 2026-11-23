// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.

// Example
// InputCopy
// 5
// 1 8 5 7 5
// OutputCopy
// 8



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mx = INT_MIN; // অথবা প্রথম সংখ্যা নিয়ে শুরু করতে পারো
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > mx) {
            mx = x;
        }
    }

    cout << mx << '\n';
    return 0;
}
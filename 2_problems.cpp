#include <bits/stdc++.h>
using namespace std;

// #problem 1
// void func () {
//     static int count =  1;

//     if (count == 6) {
//         return;
//     }

//     cout << "name" << endl;
//     count++;

//     func ();
// }

// #problem 2
// void func (int count, int n) {
//     // static int count = 1;

//     if (count == n + 1) {
//         return;
//     }
//     cout << count << endl;

//     ++count;
//     func (count, n);
// }

// #problem 3
// void func (int count) {
//     if  (count == 0) {
//         return;
//     }

//     cout << count << endl;
//     --count;
//     func (count);
// }

// #problem 4
// void func (int n) {
//     if (n == 0) {
//         return;
//     }

//     func (n - 1);
//     cout << n << endl;
// }

// #problem 5
// void func (int count, int n) {
//     // static int count = 1;
//     if (count == n + 1) {
//         return;
//     }
//     func (count + 1, n);
//     cout << count << endl;
// }

// void func (int n) {
//     if (n == 0) {
//         return ;
//     }

//     cout << n;
//     func (n - 1);
// }

// void func (int i, int n) {
//     if (i > n) {
//         return;
//     }

//     func (i + 1, n);
//     cout << i;
// }

// int sumOfN (int n) {
//     if (n == 0) {
//         return 0;
//     }

//     return n + sumOfN (n - 1);
// }

// void func (int i, int sum) {
//     if (i < 1) {
//         cout << sum;
//         return;
//     }

//     func (i - 1, sum + i);
// }

// int fact (int n) {
//     if (n == 0) {
//         return 1;
//     }

//     return n * fact (n - 1);
// }

/*
Reverse an array using recursion : 
*/

// int arr[5] = {1, 2, 3, 4, 5};

// void swap (int &x, int &y) {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// // reversing an array using recursion 
// void rev (int i, int n) {
//     if (i > (n - 1)/2)
//     {
//         return;
//     }
//     swap (arr[i], arr[n - i - 1]) ;

//     rev (i + 1, n);

// }

// void f (int l = 0, int r = 4)
// {
//     if (r <= l) return;

//     swap (arr[l], arr[r]);

//     f (l + 1, r - 1);
// }

string s = "naman";

    int flag = 0;
void f (int l = 0, int r = s.length() - 1)
{

    if (s[l] != s[r])
    {
        flag = 1;
    }
    if (l >= r) {
        return;
    }

    f (l + 1, r - 1);
}

bool palCheck (int l = 0, int r = s.length() - 1) {
    if (l >= r) return 1;
    return (s[l] == s[r]) * palCheck(l + 1, r - 1);
}

bool palCheck2 (int i = 0) { // It stops recursion as soon as it finds an unequivalent character .
    if (i >= s.length() / 2) return true;

    if (s[i] != s[s.length() - i - 1]) {
        return false;
    }

    return (i + 1);
}
int main () {
    // int n; cin >> n;
    // // func ( n);
    // func (1, n);

    // cout << sumOfN (5);
    // func (n, 0);
    // rev (0, 5);

    // f ();

    // if (flag == 0) {
    //     cout << "palindrome"<< endl;
    // }
    // else {
    //     cout << "no paindrome !" << endl;
    // }

    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << endl;
    // }

    // if (palCheck()) {
    //     cout << "palindrome";
    // }
    // else {
    //     cout << "not a palindrome !";
    // }

    palCheck2();
}
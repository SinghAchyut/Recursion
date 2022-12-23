#include <iostream>
using namespace std;

// In C++ recursion is allowed 
// void func () {
//     cout << 1 << endl;
//     func(); // example of recursion but the stop condition is not there 
//     // so program execution stops due to stack overflow 
// }

void func () {
    static int count = 0;

    if (count == 4) {     // This is called as base condition 
        return;
    }

    cout << count << endl;
    count++;
    func ();
}

int main () {
    func();
}

// The place where uncompleted functions are stored . 

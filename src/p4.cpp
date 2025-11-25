// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;
int fib(int n);
void search(int n);
int main() {
    
    search(3);
    
    return 0;
}

int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

void search(int n) {
    if(n == 1)
    cout << "|--";
    cout << "SEARCH fib(" << n << ")" << endl;
    if(n == 2) {
       cout << "|--";
       cout << "GET fib(" << n << ") = " << fib(n) << endl;
       search(1);
       return;
    }
    if(n == 1) {
        cout << "|--";
        cout << "GET fib(" << n << ") = " << fib(n) << endl;
        return;
    }
    search(n - 1);
    cout << "GET fib(" << n << ") = " << fib(n) << endl;
}
// 題目 4：遞迴的足跡 (Footsteps of Recursion) - 30分

#include <iostream>
using namespace std;

int fib(int n);
void search(int n);
void print();
int step = 0;

int main() {
    
    int n;
    cin >> n;
    search(n);
    cout << fib(n) << endl;
    
    return 0;
}

int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

void print() {
    for(int i = 0; i < step; i++) {
        cout << "|--";
    }
}

void search(int n) {
    print();
    cout << "SEARCH fib(" << n << ")" << endl;
    step++;
    if(n == 2 || n == 1) {
       step--;
        print();
       cout << "GET fib(" << n << ") = " << fib(n) << endl;
       return;
    }
    else
    search(n - 1);
    search(n - 2);
    step--;
    print();
    cout << "GET fib(" << n << ") = " << fib(n) << endl;
}

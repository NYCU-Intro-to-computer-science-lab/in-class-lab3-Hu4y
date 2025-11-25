// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;

bool isPrime(int n);
int findprime(int n);
int main() {
    int n;
    cin >> n;
    cout << findprime(n) << " " << n - findprime(n) << endl;
    return 0;
}

bool isPrime(int n) {
    for(int i = 2; i * i < n + 1; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int findprime(int n) {
    for(int i = 2; i < (n/ 2) + 1; i++) {
        if(isPrime(i)) {
            if(isPrime(n - i)){
                return i;
            }
        }
    }
    return n;
}
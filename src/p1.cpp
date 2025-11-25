// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;

long long sum(long long n);
long long factorial(long long n);
int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    cout << sum(n) << endl;
    
    return 0;
}

long long sum(long long n) {
    if(n==0)
    return 0;
    if(n == 1)
    return 1;
    else
    return n + sum(n - 1);
}

long long factorial(long long n) {
    if(n==1 || n == 0){
        return 1;
    }
    else 
    return n * factorial(n-1);
}
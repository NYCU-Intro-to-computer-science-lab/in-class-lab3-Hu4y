// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;
int gcd(int a, int b);
int main() {
    int a;
    int b;
    cin >> a >> b;
    cout << gcd(a, b);
    
    return 0;
}

int gcd(int a, int b) {
    if(b%a == 0) {
        return a;
    }
    else
    return gcd(b%a, a);
}
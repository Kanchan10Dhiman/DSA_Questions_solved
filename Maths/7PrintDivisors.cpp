#include<iostream>
#include<cmath>
using namespace std;
//brute force
void printDivisors(int n) {
    for(int i = 1; i <= n; i++) {
        if(n % i == 0)
            cout << i << " ";
    }
}
//optimal
void printDivisors2(int n) {
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            cout << i << " ";          // smaller divisor
            if(i != n / i)             // to avoid printing square root twice
                cout << n / i << " ";  // paired divisor
        }
    }
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printDivisors2(n);
}

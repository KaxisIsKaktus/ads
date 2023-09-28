#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    if (num > 1) {
        bool isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) cout << "YES";
        else cout << "NO";
    } else cout << "NO";
}
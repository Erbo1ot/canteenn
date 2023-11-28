#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

   
    int digit1 = n / 100000 % 10;
    int digit2 = n / 10000 % 10;
    int digit3 = n / 1000 % 10;
    int digit4 = n / 100 % 10;
    int digit5 = n / 10 % 10;
    int digit6 = n % 10;

    if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
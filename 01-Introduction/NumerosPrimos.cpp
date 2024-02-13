#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int n;
    cin >> n;
    bool esPrimo = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            esPrimo = false;
            break;
        }
    }
    if (esPrimo) {
        cout << "Es primo" << endl;
    } else {
        cout << "No es primo" << endl;
    }
    return 0;
}

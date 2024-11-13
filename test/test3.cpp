#include <iostream>
#include <cmath>
using namespace std;

long long fibonacci(int n) {
    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;

    // Công thức Binet
    return round((pow(phi, n) - pow(psi, n)) / sqrt(5));
}

int main() {
    int n;

    cout << "Nhập số lượng phần tử trong dãy Fibonacci: ";
    cin >> n;

    cout << "Dãy Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}

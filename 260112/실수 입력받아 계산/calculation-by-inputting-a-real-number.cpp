#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(2);
    double a, b;
    cin >> a >> b;

    cout << a + b;
    return 0;
}
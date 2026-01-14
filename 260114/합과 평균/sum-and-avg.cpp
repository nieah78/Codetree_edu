#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int A, B;
    cin >> A >> B;

    cout.precision(1);
    cout << A + B << " " << (double)(A + B)/2;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    a % 2?cout << "odd\n":cout << "even\n";
    b % 2?cout << "odd":cout << "even";
    return 0;
}
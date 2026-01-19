#include <iostream>
using namespace std;

int main() {
    int A, B, mul = 1;
    cin >> A >> B;

    for(int i = A; i <= B; i++) mul *= i;
    cout << mul;
    return 0;
}
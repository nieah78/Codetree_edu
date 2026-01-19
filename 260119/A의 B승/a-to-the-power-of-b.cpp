#include <iostream>
using namespace std;

int main() {
    int A, B, res = 1;
    cin >> A >> B;

    for(int i = 0; i < B; i++) res *= A;
    cout << res;
    return 0;
}
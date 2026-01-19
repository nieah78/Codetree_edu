#include <iostream>
using namespace std;

int main() {
    int A, B, res = 1;
    cin >> A >> B;

    for(int i = 1; i <= B; i++) if(!(i % A)) res *= i;
    cout << res;
    return 0;
}
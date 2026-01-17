#include <iostream>
using namespace std;

int main() {
    int N, a, i = 0;
    cin >> N >> a;

    while(i < N) cout << !(++i % a) << "\n";
    return 0;
}
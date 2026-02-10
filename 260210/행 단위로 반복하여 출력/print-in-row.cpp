#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0;
    for(int i = 1; i <= N; i++) a = a * 10 + i;

    for(int i = 0; i < N; i++) cout << a << "\n";
    return 0;
}
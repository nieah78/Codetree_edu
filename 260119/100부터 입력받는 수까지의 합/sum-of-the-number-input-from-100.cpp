#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    for(int i = N; i < 101; i++) sum += i;
    cout << sum;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int N, a, sum = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> a;
        sum += a;
    }

    cout.precision(1);
    cout << sum << " " << (double)sum/N;
    return 0;
}
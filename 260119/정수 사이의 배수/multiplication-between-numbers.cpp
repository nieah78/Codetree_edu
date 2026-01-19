#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int A, B, sum = 0, cnt = 0;
    cin >> A >> B;

    for(int i = A; i <= B; i++)
        if(!(i % 5) || !(i % 7)) {
            cnt++;
            sum += i;
        }
    cout.precision(1);
    cout << sum << " " << (double)sum/cnt;
    return 0;
}
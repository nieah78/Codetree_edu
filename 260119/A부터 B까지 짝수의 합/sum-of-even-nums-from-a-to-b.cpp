#include <iostream>
using namespace std;

int main() {
    int A, B, sum = 0;
    cin >> A >> B;

    for(int i = A; i < B+1; i++) if(!(i % 2)) sum += i;
    cout << sum;
    return 0;
}
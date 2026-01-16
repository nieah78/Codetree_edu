#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int A, B;
    cin >> A >> B;
    // double l = A / B;
    // int r = A % B;

    // double temp;

    // for(int i = 1; i <= 21; i++){
    //     temp = (r * 10) / B;
    //     r = (r * 10) % B;

    //     for(int j = 0; j < i; j++) temp *= 0.1;

    //     l += temp;
    // }

    // cout.precision(25);

    cout << A/B << ".";
    for(int i = 0; i < 20; i++){
        A = (A % B) * 10;
        cout << A / B;
    }

    return 0;
}
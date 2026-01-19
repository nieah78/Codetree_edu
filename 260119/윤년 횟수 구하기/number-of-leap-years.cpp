#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << (N / 4) - (N / 100 - N / 400);
    return 0;
}

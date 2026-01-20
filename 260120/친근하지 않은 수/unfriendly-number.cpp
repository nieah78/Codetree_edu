#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    cout << N - (N/2 + N/3 + N/5) + (N/6 + N/15 + N/10) - N/30;
    return 0;
}
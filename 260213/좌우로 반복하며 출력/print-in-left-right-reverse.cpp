#include <iostream>
using namespace std;

int main() {
    int N, a = 0, b = 0;
    cin >> N;

    for(int i = 1; i <= N; i++){
        a = a*10 + i;
        b = b*10 + N-i+1;
    }

    for(int i = 0; i < N; i++) cout << (i%2 ? b : a) << "\n";
    return 0;
}
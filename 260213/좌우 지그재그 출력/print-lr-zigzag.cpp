#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 1; j <= N; j++) cout << (i%2?(i+1)*N-j+1:i*N+j) << ' ';
        cout << "\n";
    }
    return 0;
}
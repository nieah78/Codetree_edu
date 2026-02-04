#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 2*N; j++)
            j > N - i - 1 && j < N + i ? cout << ' ' : cout << '*';
        cout << "\n";
    }
    return 0;
}
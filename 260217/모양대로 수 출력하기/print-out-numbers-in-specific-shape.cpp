#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        cout << string(i*2, ' ');
        for(int j = i; j < N; j++){
            cout << N-j << ' ';
        }
        cout << "\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N, j;
    cin >> N;

    for(int i = 1; i <= 2*N; i++){
        j = i%2? i/2+1 : N-(i/2)+1;
        for(;j > 0; j--) cout << "* ";
        cout << "\n";
    }
    return 0;
}
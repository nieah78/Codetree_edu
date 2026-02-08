#include <iostream>
using namespace std;

int main() {
    int N, k;
    cin >> N;

    for(int i = 1; i < N; i++){
        if(N-i) for(int j = 0; j < N-i; j++) cout << "  ";
        k = i>N ? 2*N-i : i;
        for(; k>0; k--) cout << "@ ";
        cout << "\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N, j;
    cin >> N;

    for(int i = 1; i < 2 * N; i++){
        j = i > N ? 2*(i-N)+1 : 2*(N-i)+1;
        for(int k = 2*N-j; k > 1; k--) cout << ' ';
        for(; j > 0; j--) cout << "* ";
        cout << "\n";
    }

    return 0;
}
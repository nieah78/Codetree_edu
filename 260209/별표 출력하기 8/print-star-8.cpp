#include <iostream>
using namespace std;

int main() {
    int N, j;
    cin >> N;

    for(int i = 0; i < N; i++){
        j = i%2 ? i+1 : 1;
        for(;j > 0; j--) cout << "* ";
        cout << "\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int N, j, k;
    cin >> N;

    for(int i = 1; i < 2*N; i++){
        if(i > N){
            j = i - N;
            k = 2 * N - i;
        }
        else{
            j = N - i;
            k = i;
        }
        for(; j > 0; j--) cout << ' ';
        for(; k > 0; k--) cout << "* ";
        cout << "\n";
    }
    return 0;
}
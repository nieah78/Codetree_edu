#include <iostream>

using namespace std;

int n, j;

int main() {
    cin >> n;

    for(int i = 1; i < 2*n; i++){
        j = i > n ? 2*n-i : i;
        for(int k = j; k < n; k++) cout << ' ';
        for(j*=2; j > 1; j--) cout << '*';
        cout << "\n";
    }

    return 0;
}

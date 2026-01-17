#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = N; i < 100; i++){
        if(i >= 60) cout << (char)(74 - (i / 10)) << " ";
        else cout << "F ";
    }
    cout << 'A';
    return 0;
}
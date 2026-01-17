#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = N; i < 100; i++){
        if(i < 60) cout << "F ";
        else cout << (char)(74 - (i / 10)) << " ";
    }
    cout << 'A';
    return 0;
}
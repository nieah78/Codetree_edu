#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cnt = i%2? cnt+2 : cnt+1;
            cout << cnt << ' ';
        }
        cout << "\n";
    }
    return 0;
}
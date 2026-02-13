#include <iostream>
using namespace std;

int main() {
    int N, cnt = 2;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << cnt << ' ';
            cnt += 2;
            if(cnt > 8) cnt = 2;
        }
        cout << "\n";
    }
    return 0;
}
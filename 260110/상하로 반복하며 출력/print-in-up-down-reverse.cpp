#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int row[9];

    for(int i = 0; i < N; i++){
        row[i] = i+1;
    }

    for(int i = 0; i < N; i++){ //행
        for(int j = 0; j < N; j++){ //열
            if(j % 2){ //홀수 열일 때
                cout << row[N-i-1];
            }
            else cout << row[i];
        }
        cout << "\n";
    }
    return 0;
}
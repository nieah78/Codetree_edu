#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        if(i % 2){ // 홀수번째 행
            for(int j = N; j > 0; j--) cout << j;
        }
        else{
            for(int j = 1; j < N+1; j++) cout << j;
        }
        cout << "\n";
    }

    return 0;
}
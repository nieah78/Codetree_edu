#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    while(N != 1){
        N = N % 2? N*3+1 : N/2;
        cnt++;  
    }
    cout << cnt;
    return 0;
}
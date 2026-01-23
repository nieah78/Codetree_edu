#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    while(N < 1000){
        N = N%2 ? N*2+2 : N*3+1;
        cnt++;
    }
    cout << cnt;
    return 0;
}
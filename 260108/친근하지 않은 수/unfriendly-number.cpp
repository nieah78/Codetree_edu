#include <iostream>
using namespace std;

int main() {
    int N, count = 0;
    cin >> N;

    for(int i = 1; i <= N; i++){
        if(i % 2 && i % 3 && i % 5) count++;
    }
    cout << count;
    return 0;
}
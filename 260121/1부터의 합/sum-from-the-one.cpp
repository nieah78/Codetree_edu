#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    for(int i = 1; i < 101; i++){
        sum += i;
        if(sum >= N){
            cout << i;
            break;
        }
    }
    return 0;
}
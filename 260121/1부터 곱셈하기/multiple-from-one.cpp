#include <iostream>
using namespace std;

int main() {
    int N, mul = 1;
    cin >> N;

    for(int i = 1; i < 11; i++){
        mul *= i;
        if(mul >= N){
            cout << i;
            break;
        }
    }
    return 0;
}
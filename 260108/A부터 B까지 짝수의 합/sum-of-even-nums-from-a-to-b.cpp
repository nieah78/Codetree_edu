#include <iostream>
using namespace std;

int main() {
    int A, B, sum = 0;
    cin >> A >> B;

    for(int i = A; i <= B; i++){
        if(i % 2) continue;

        sum += i;
    }
    return 0;
}
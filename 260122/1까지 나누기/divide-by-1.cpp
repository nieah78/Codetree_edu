#include <iostream>
using namespace std;

int main() {
    int N, i = 0;
    cin >> N;
    
    while(1){
        N /= ++i;
        if(N <= 1){
            cout << i;
            break;
        }
    }
    return 0;
}
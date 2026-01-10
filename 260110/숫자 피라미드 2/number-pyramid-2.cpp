#include <iostream>
using namespace std;

int main() {
    int N, num = 1;
    cin >> N;

    for(int i = 1; i < N+1; i++){
        for(int j = 0; j < i; j++){
            cout << num++ << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
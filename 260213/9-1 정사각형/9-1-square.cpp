#include <iostream>
using namespace std;

int main() {
    int N, a = 9;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << a--;
            if(!a) a = 9;
        }
        cout << "\n";
    }
    return 0;
}
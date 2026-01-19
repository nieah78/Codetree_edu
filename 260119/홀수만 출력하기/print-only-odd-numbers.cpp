#include <iostream>
using namespace std;

int main() {
    int N, a;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> a;
        if(a % 2 && !(a % 3)) cout << a << "\n";
    }
    return 0;
}
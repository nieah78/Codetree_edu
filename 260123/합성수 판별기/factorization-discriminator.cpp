#include <iostream>
using namespace std;

int main() {
    bool y = false;
    int N;
    cin >> N;

    for(int i = 2; i < N; i++){
        if(!(N%i)){
            y = true;
            break;
        }
    }
    y ? cout << 'C' : cout << 'N';
    return 0;
}
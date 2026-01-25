#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i < 2*N; i++){
        if(i > N) for(int j = 2*N - i; j > 0; j--) cout << "* ";
        else for(int j = 0; j < i; j++) cout << "* ";
        cout << "\n";
    }
    return 0;
}
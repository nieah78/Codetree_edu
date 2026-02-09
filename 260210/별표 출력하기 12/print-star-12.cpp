#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(j%2) i<=j ? cout << "* " : cout << "  ";
            else if(!i) cout << "* ";
            else cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}
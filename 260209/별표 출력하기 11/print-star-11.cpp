#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 0; i < 2*N+1; i++){
        for(int j = 0; j < 2*N+1; j++)
            (i%2) && (j%2) ? cout<<"  " : cout<<"* ";
        cout << "\n";
    }
    return 0;
}
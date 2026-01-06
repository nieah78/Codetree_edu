#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = N; i <= 100; i++){
        if(N >= 90) cout << "A ";
        else if(N >= 80) cout << "B ";
        else if(N >= 70) cout << "C ";
        else if(N >= 60) cout << "D ";
        else cout << "F ";

        N++;
    }
    return 0;
}
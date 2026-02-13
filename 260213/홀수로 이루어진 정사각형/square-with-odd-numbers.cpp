#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    int N;
    cin >> N;

    for(int i = 0; i < 2*N; i+=2){
        for(int j = 0; j < 2*N; j+=2) a += to_string(11 + i + j) + ' ';
        a += "\n";
    }

    cout << a;
    return 0;
}
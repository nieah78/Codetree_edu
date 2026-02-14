#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string a = "";

    for(int i = 0; i < N; i++){
        for(int j = 0; j < i+1; j++) a += to_string(j + 1) + ' ';
        a += "\n";
    }

    cout << a;
    return 0;
}
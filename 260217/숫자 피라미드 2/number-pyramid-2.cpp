#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "";
    int N, cnt = 1;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < i+1; j++) a += to_string(cnt++) + ' ';
        a += "\n";
    }

    cout << a;
    return 0;
}
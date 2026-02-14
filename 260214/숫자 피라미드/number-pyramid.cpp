#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "";
    int N;
    cin >> N;

    for(int i = 1; i < N+1; i++){
        for(int j = 0; j < i; j++) a += to_string(i) + ' ';
        a += "\n";
    }
    cout << a;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string a ="";
    cin >> N;

    for(int i = 1; i <= N; i++) a += string(N, (char)(i + '0')) + "\n";
    cout << a;

    return 0;
}
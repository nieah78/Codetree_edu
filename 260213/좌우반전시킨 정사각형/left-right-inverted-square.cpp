#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string a = "";
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = N; j > 0; j--) a += to_string(i*j) + ' ';
        a += "\n";
    }

    cout << a;
    return 0;
}
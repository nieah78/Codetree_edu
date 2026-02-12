#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string a = "";

    for(int i = N; i > 0; i--) a += to_string(i) + ' ';
    for(int j = 0; j < N; j++) cout << a << "\n";

    return 0;
}
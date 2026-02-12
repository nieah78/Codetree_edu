#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "";
    int N;
    cin >> N;

    for(int i = N; i > 0; i--){
        for(int j = N; j > 0; j--)
            a += '(' + to_string(i) + ',' + to_string(j) + ") ";
        a += "\n";
    }

    cout << a;
    return 0;
}
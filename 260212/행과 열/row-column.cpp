#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string c = "";

    for(int i = 1; i <= A; i++){
        for(int j = 1; j <= B; j++)
            c += to_string(i*j) + ' ';
        c += "\n";
    }

    cout << c;
    return 0;
}
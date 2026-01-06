#include <iostream>
using namespace std;

int main() {
    string x = "";
    cin >> x;

    x[1] = 'a';
    x[x.length() - 2] = 'a';

    cout << x;
    
    return 0;
}
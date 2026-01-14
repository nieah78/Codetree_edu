#include <iostream>
using namespace std;

int main() {
    int a, b, c, res;
    cin >> a >> b >> c;
    
    if(a > b) res = b;
    else res = a;

    if(c < res) res = c;

    cout << res;
    return 0;
}
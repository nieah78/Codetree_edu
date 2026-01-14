#include <iostream>
using namespace std;

int main() {
    int a, b, res;
    cin >> a >> b;

    if(a < 90) res = 0;
    else if(b >= 95) res = 100000;
    else if(b >= 90) res = 50000;
    else res = 0;

    cout << res;
    return 0;
}
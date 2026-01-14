#include <iostream>
using namespace std;

int main() {
    int n, res;
    cin >> n;

    if(n == 2) res = 28;
    else if(((n < 8) && (n % 2)) || ((n >= 8) && !(n % 2))) res = 31;
    else res = 30;

    cout << res;
    return 0;
}
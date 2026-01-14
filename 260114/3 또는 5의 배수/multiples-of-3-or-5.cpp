#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;

    if(A % 3) cout << "NO\n";
    else cout << "YES\n";

    if(A % 5) cout << "NO";
    else cout << "YES";

    return 0;
}
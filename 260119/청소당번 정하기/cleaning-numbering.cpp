#include <iostream>
using namespace std;

int main() {
    int n, c2, c3, c12;
    c2 = c3 = c12 = 0;

    cin >> n;
    for(int i = 1; i <= n; i++){
        if(!(i % 12)) c12++;
        else if(!(i % 3)) c3++;
        else if(!(i % 2)) c2++;
    }
    cout << c2 << " " << c3 << " " << c12;
    return 0;
}
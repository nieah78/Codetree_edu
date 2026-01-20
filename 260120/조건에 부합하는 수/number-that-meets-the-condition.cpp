#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;

    for(int i = 1; i <= A; i++)
        if(!(!(i%2) && i%4) && (i/8)%2 && !(i%7 < 4))
            cout << i << " ";
    return 0;
}
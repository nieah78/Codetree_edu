#include <iostream>
using namespace std;

int main() {
    int Aa, Ba;
    char As, Bs;
    
    cin >> Aa >> As;
    cin >> Ba >> Bs;

    cout << (((Aa >= 19) && (As == 'M')) || ((Ba >= 19) && (Bs == 'M')));
    return 0;
}
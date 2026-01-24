#include <iostream>
using namespace std;

int main() {
    bool y = true;
    int a, b, c;
    cin >> a >> b >> c;

    while(a <= b && y) if(!(a++ % c)) y = false;

    y ? cout<<"YES" : cout<<"NO";
    return 0;
}
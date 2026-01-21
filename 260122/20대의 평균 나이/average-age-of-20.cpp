#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int a, sum = 0, cnt = 0;
    
    while(1){
        cin >> a;
        if(a / 10 != 2) break;

        sum += a;
        cnt++;
    }

    cout.precision(2);
    cout << (double)sum/cnt;
    return 0;
}
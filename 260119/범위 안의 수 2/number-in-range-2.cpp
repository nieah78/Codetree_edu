#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int a, cnt = 0, sum = 0;

    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a >= 0 && a <= 200){
            cnt++;
            sum += a;
        }
    }

    cout.precision(1);
    cout << sum << " " << (double)sum/cnt;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, cnt = 0;
    for(int i = 0; i < 5; i++){
        cin >> a;
        if(!(a % 2)) cnt++;
    }
    cout << cnt;
    return 0;
}
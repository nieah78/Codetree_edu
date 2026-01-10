#include <iostream>
using namespace std;

int main() {
    int a, cnt = 0;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a;
            if(a % 5 == 0) cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}
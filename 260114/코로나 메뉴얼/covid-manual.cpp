#include <iostream>
using namespace std;

int main() {
    char c;
    int temp, res = 0;

    for(int i = 0; i < 3; i++){
        cin >> c >> temp;
        if((c == 'Y') && (temp >= 37)) res++;
    }

    if(res >= 2) cout << 'E';
    else cout << 'N';
    return 0;
}
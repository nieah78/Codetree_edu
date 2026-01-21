#include <iostream>
using namespace std;

int main() {
    int x, y;
    char a;

    while(1){
        cin >> x >> y >> a;
        cout << x * y << "\n";
        
        if(a == 'C') break;
    }
    return 0;
}
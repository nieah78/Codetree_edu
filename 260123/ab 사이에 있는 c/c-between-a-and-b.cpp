#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool yes = false;
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++){
        if(!(i % c)){
            yes = true;
            break;
        }
    }
    
    yes ? cout << "YES" : cout << "NO";
    return 0;
}
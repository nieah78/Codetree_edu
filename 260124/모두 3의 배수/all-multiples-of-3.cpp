#include <iostream>
using namespace std;

int main() {
    bool y = true;
    int a;
    
    for(int i = 0; i < 5; i++){
        cin >> a;
        if(a%3){
            y = false;
            break;
        }
    }

    cout << y;
    return 0;
}
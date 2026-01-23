#include <iostream>
using namespace std;

int main() {
    bool y = false;
    int A, B;
    cin >> A >> B;

    for(int i = A; i <= B; i++){
        if(!(1920%i) && !(2880%i)){
            y = true;
            break;
        }
    }

    cout << y;
    return 0;
}
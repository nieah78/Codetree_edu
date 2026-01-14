#include <iostream>
using namespace std;

int main() {
    int s, a;
    cin >> s >> a;

    if(s){
        if(a < 19) cout << "GIRL";
        else cout << "WOMAN";
    }
    
    else{
        if(a < 19) cout << "BOY";
        else cout << "MAN";
    }

    return 0;
}
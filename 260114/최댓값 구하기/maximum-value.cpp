#include <iostream>
using namespace std;

int main() {
    int a, b, c, best;
    cin >> a >> b >> c;
    
    if(a > b){
        if(a > c) best = a;
        else best = c;
    }
    else{
        if(b > c) best = b;
        else best = c;
    }

    cout << best;
    return 0;
}
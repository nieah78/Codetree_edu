#include <iostream>
using namespace std;

int main() {
    int A, B, C, res;
    cin >> A >> B >> C;

    if(A > B && A > C){
        if(B > C) res = B;
        else res = C;
    }
    else if(B > A && B > C){
        if(A > C) res = A;
        else res = C;
    }
    else{
        if(A > B) res = A;
        else res = B;
    }

    cout << res;
    return 0;
}
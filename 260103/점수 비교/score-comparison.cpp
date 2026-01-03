#include <iostream>
using namespace std;

int main() {
    int A_Math, A_Eng, B_Math, B_Eng;
    cin >> A_Math >> A_Eng >> B_Math >> B_Eng;

    if(A_Math > B_Math && A_Eng > B_Eng) cout << 1;
    else cout << 0;
    
    return 0;
}
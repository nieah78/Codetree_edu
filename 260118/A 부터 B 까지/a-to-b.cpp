#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    while(A <= B){
        cout << A << " ";
        A = A%2 ? A*2 : A+3;
    }
    
    return 0;
}
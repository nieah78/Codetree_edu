#include <iostream>
using namespace std;

int main() {
    int A, B, temp;
    cin >> A >> B;

    if(A > B){
        temp = A;
        A = B;
        B = temp;
    }

    for(int i = B; i >= A; i--) cout << i << " ";
    return 0;
}
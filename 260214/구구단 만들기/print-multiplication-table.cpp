#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    for(int j = 1; j < 10; j++){
        for(int i = B; i >= A; i-=2){
            cout << i << " * " << j << " = " << i*j;
            if(i == A) break;
            cout << " / ";
        }
        cout << "\n";
    }
    return 0;
}
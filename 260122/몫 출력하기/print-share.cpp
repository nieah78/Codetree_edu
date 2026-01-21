#include <iostream>
using namespace std;

int main() {
    int a;
    for(int i = 0; i < 3;){
        cin >> a;
        if(!(a % 2)){
            cout << a/2 << "\n";
            i++;
        }
    }
    return 0;
}
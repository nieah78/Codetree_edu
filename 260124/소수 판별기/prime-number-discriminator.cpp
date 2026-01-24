#include <iostream>
using namespace std;

int main() {
    bool y = true;
    int N;
    cin >> N;

    for(int i = 2; i <= N/2; i++){
        if(!(N%i)){
            y = false;
            break;
        }
    }
    y ? cout<<'P' : cout<<'C';
    return 0;
}
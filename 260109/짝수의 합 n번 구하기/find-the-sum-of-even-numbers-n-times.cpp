#include <iostream>
using namespace std;

int main() {
    int N, a, b, sum;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        sum = 0;

        for(int j = a; j < b+1; j++){
            if(!(j % 2)) sum += j;
        }

        cout << sum << "\n";
    }
    
    return 0;
}
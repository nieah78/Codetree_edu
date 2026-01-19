#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;

    for(int i = 1; i <= N/2; i++) if(!(N % i)) sum += i;
    N==sum?cout << 'P':cout << 'N';
    return 0;
}
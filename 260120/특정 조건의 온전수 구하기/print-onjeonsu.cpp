#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++) if(i % 2 && (i % 10 != 5) && !(!(i % 3) && i % 9)) cout << i << " ";
    return 0;
}
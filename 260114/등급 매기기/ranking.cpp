#include <iostream>
using namespace std;

int main() {
    int N;
    char res;
    cin >> N;

    if(N >= 90) res = 'A';
    else if(N >= 80) res = 'B';
    else if(N >= 70) res = 'C';
    else if(N >= 60) res = 'D';
    else res = 'F';

    cout << res;
    return 0;
}
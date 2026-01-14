#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    if(M == 12 || M <= 2) cout << "Winter";
    else if(M >= 9) cout << "Fall";
    else if(M >= 6) cout << "Summer";
    else cout << "Spring";
    return 0;
}
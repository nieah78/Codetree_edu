#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    if(((N % 2) && !(N % 3)) || (!(N % 2) && !(N % 5))) cout << "true";
    else cout << "false";
    return 0;
}
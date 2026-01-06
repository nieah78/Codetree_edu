#include <iostream>
using namespace std;

int main() {
    string a = "";
    string b = "";

    cin >> a >> b;
    int a_len = a.length();
    int b_len = b.length();

    if(a_len == b_len) cout << "same";
    else if(a_len > b_len) cout << a << " " << a_len;
    else cout << b << " " << b_len;

    return 0;
}
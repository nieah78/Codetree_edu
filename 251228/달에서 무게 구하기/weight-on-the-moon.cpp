#include <iostream>
using namespace std;

int main() {
    int chu = 13;
    double g = 0.165;
    cout << fixed;
    cout.precision(6);
    cout << chu << " * " << g << " = " << chu * g;
    return 0;
}
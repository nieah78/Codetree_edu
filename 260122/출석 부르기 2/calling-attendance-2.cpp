#include <iostream>
using namespace std;

int main() {
    int a;
    bool x = true;

    while(x){
        cin >> a;

        switch(a){
            case 1:
                cout << "John\n";
                break;
            
            case 2:
                cout << "Tom\n";
                break;

            case 3:
                cout << "Paul\n";
                break;

            case 4:
                cout << "Sam\n";
                break;

            default:
                cout << "Vacancy";
                x = false;
                break;
        }
    }
    return 0;
}
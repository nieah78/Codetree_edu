#include <iostream>
using namespace std;

int main() {
    int gender, age;
    cin >> gender >> age;

    if(gender){ // 여성
        if(age >= 19) cout << "WOMAN";
        else cout << "GIRL";
    }
    else{
        if(age >= 19) cout << "MAN";
        else cout << "BOY";
    }

    return 0;
}
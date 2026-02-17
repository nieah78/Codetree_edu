#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "";
    int N, cnt = 1;
    cin >> N;

    for(int i = 0; i < N; i++){
        a += string(i*2, ' ');
        for(int j = i; j < N; j++){
            if(cnt>9) cnt = 1;
            a += to_string(cnt++) + ' ';           
        }
        a += "\n";
    }

    cout << a;
    return 0;
}
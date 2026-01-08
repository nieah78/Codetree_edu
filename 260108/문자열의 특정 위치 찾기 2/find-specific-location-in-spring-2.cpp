#include <iostream>
using namespace std;

int main() {
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    int cnt = 0;
    char a;
    cin >> a;

    for(int i = 0; i < 5; i++){
        if(arr[i][2] == a || arr[i][3] == a){
            cnt++;
            cout << arr[i] << "\n";
        }
    }

    cout << cnt;
    return 0;
}
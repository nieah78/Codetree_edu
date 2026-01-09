#include <iostream>

using namespace std;

int st, ed, temp;

int calc(int num){
    temp = 0;
    for(int x = 1; x < num+1; x++){
        if(num % x == 0) temp++; 

        if(temp > 3){
            temp = 0;
            break;
        }
    }
    return temp;
}

int main() {
    cin >> st >> ed;
    int cnt = 0;

    for(int i = st; i < ed+1; i++){
        if(calc(i) == 3) cnt++;
    }

    cout << cnt;

    return 0;
}

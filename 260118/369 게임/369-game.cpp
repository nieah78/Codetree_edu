#include <iostream>
using namespace std;

int main() {
    int N, temp;
    cin >> N;
    bool flag;

    for(int i = 1; i <= N; i++){
        temp = i;
        flag = true;
        
        if(!(i % 3)) flag = false;
        else{
            while(temp > 0){
                if(temp % 10 && !((temp % 10) % 3)){
                    flag = false;
                    break;
                }
                temp /= 10;
            }
        }
        flag?cout<<i<<" ":cout<<"0 ";
    }
    return 0;
}
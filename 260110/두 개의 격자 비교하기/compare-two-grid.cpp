#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int arr_1[10][10], arr_2[10][10], arr_new[10][10];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) cin >> arr_1[i][j];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) cin >> arr_2[i][j];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            arr_new[i][j] = !(arr_1[i][j] == arr_2[i][j]);
            cout << arr_new[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
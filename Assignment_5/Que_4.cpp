#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[30][30];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int x;
    cin >> x;

    int i = 0;
    int j = m - 1;

    while(i < n && j >= 0){
        if(arr[i][j] == x){
            cout << 1;
            return 0;
        }
        else if(arr[i][j] > x){
            j--;
        }
        else{
            i++;
        }
    }

    cout << 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool isLowerTriangular = true;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(matrix[i][j] != 0) {
                isLowerTriangular = false;
                break;
            }
        }
        if(!isLowerTriangular) break;
    }

    if(isLowerTriangular)
        cout << "true";
    else
        cout << "false";

    return 0;
}
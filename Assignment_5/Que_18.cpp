#include<iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int mat[1000][1000];

    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cin >> mat[i][j];
        }
    }

    int row[1000] = {0};
    int col[1000] = {0};

    // Step 1: mark rows and columns where 1 is present
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            if(mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: modify matrix according to question
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            if(row[i] == 1 || col[j] == 1) {
                mat[i][j] = 1;
            }
        }
    }

    // Step 3: print modified matrix
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){

    int M,N;
    cin>>M>>N;
	int arr[100][100];
    // vector<vector<int>> array(M,vector<int>(N));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    int left=0,right=N-1,top=0,bottom=M-1;
    while(left<=right && top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){
            // top row
            cout<<arr[top][i]<<", ";
        }
        top++;
        //top to bottom
        for(int j=top;j<=bottom;j++){
            // right column
            cout<<arr[j][right]<<", ";
        }
        right--;
        if(top<=bottom){
            // right to left
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<", ";
            }
            bottom--;
        }
        if(left<=right){
            for(int j=bottom;j>=top;j--){
                cout<<arr[j][left]<<", ";
            }
            left++;
        }
    }
	cout<<"END";
    return 0;

}
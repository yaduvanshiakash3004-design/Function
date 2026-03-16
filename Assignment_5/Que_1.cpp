#include<iostream>
#include<vector>
using namespace std;

int main(){
    int M,N;
    cin>>M>>N;
    vector<vector<int>> arr(M,vector<int>(N));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<M;i++){
        if(i%2==0){
            for(int j=0;j<N;j++){
                cout<<arr[i][j]<<", ";
            }
        }
        else{
            for(int j=N-1;j>=0;j--){
                cout<<arr[i][j]<<", ";
            }
        }
    }
	cout<<"END";
    return 0;

}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int M,N;
    cin>>M>>N;
    vector<vector<int>> array(M,vector<int>(N));
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            cin>>array[i][j];
        }
    }
        for(int j=0;j<N;j++){
          if(j%2==0){
            for(int i=0;i<M;i++) {
                cout<<array[i][j]<<", ";
            }         
        }
        else{
            for(int i=M-1;i>=0;i--) {
                cout<<array[i][j]<<", ";
            } 
        }
        }
    cout<<"END";
    return 0;
}
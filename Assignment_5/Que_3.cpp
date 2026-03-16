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

    int T=0,L=0,R=N-1,B=M-1;
    int total = M*N;
    int count = 0;

    while(L<=R && T<=B){

        for(int i=T;i<=B;i++){
            cout<<arr[i][L];
            count++;
            if(count<total) cout<<", ";
        }
        L++;

        if(L<=R){
            for(int j=L;j<=R;j++){
                cout<<arr[B][j];
                count++;
                if(count<total) cout<<", ";
            }
            B--;
        }

        if(T<=B){
            for(int k=B;k>=T;k--){
                cout<<arr[k][R];
                count++;
                if(count<total) cout<<", ";
            }
            R--;
        }

        if(L<=R){
            for(int j=R;j>=L;j--){
                cout<<arr[T][j];
                count++;
                if(count<total) cout<<", ";
            }
            T++;
        }
    }

    cout<<" END";
}
#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int student=1, pages=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPages){
            return false;
        }
        
        if(pages+arr[i]<= maxAllowedPages){
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }

    return student <=m;
}

int allocateBooks(vector<int> &arr, int n, int m){
    if(m>n){
        return -1;
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int ans=-1;
    int st=arr[n-1], end=sum;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(isValid(arr ,n, m, mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }

    }
    return ans; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
	    cin>>n>>m;

	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
		   cin>>arr[i];
	    }
        cout<<allocateBooks(arr,n,m)<<endl;
	}
    return 0;
}
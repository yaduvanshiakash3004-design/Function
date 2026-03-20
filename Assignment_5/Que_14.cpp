#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool ifPossible(vector<int> &arr, int n, int c, int minAllowedDist){
   int cows=1,lastStall=arr[0];

   for(int i=1;i<n;i++){
      if(arr[i]-lastStall >= minAllowedDist){
         cows++;
         lastStall = arr[i];
      }

      if(cows ==c ){
         return true;
      }
   }
   return false;
}

int getDistance(vector<int> &arr, int n,int c){
   sort(arr.begin(),arr.end());
   int st=1 , end=arr[n-1]-arr[0], ans=-1;

   while(st<=end){

      int mid= st+(end-st)/2;
      if(ifPossible(arr, n ,c, mid)){
         ans=mid;
         st=mid+1;
      }
      else{
      end=mid-1;
      }
   }
   return ans;
}

int main(){
   int n,c;
   cin>>n>>c;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<< getDistance(arr, n , c)<<endl;
   return 0;
}
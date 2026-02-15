#include<iostream>
using namespace std;
int main(){

int arr[]={3,8,2,10};
int max=arr[0];

for(int i=1;i<4;i++)
    if(arr[i]>max)
        max=arr[i];

return 0;
}
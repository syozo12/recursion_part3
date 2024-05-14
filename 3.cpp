//print max number in an array
#include<iostream>
#include<climits>
using namespace std;
int maxele(int arr[],int idx,int max){//we have to pass size
    if(idx<0){
        return max;
    }
    if(max<arr[idx]){
        max=arr[idx];
    }
    maxele(arr,idx-1,max);

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    cout<<"max element is ";
    cout<<maxele(arr,n-1,max);

}
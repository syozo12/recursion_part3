//printing max ele using 2 parameters
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int maxele(int arr[],int idx){//we have to pass size
    if(idx<0){
        return INT_MIN;
    }
    return max(arr[idx],maxele(arr,idx-1));

}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"max element is ";
    cout<<maxele(arr,n-1);

}
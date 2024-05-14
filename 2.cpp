//print array
#include<iostream>
using namespace std;
void print(int arr[],int size){
    if(size<0){
        return ;
    }
    print(arr,size-1);
    cout<<arr[size]<<" ";
    return ;
    
}
int main(){
    int arr[]={1,2,3,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"the elements of array are  ";
    print(arr,size-1);

}
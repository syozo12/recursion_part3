//print vector
#include<iostream>
#include<vector>
using namespace std;
//no duplicate arr is formed 
void print(vector <int> &arr,int size){
    if(size<0){
        return ;
    }
    print(arr,size-1);
    cout<<arr[size]<<" ";
    return ;
    
}
int main(){
    vector <int> arr={1,2,3,4};
    int size=arr.size();
    cout<<"the elements of array are  ";
    print(arr,size);

}
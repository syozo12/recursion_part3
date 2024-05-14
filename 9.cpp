//printing all sequence of lenght k from first n natural numbers
#include<iostream>
#include<vector>
using namespace std;
int print(int arr[],vector<int> ans,int k,int idx,int n){
    if(idx==n){
        if(ans.size()==k){
           for(int i=0;i<ans.size();i++){
              cout<<ans[i];
           }
           cout<<endl;
        }
        return 0;
    }
    if(ans.size()+(n-idx)<k) return 0 ;
    print(arr,ans,k,idx+1,n);
    ans.push_back(arr[idx]);
    print(arr,ans,k,idx+1,n);

}
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=3;
    vector<int> ans;
    print(arr,ans,k,0,n);
    
}

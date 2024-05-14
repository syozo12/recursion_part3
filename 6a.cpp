//store the subset vectors in a vector ans and return ans
#include<iostream>
#include<vector>
using namespace std;
 void subset(vector<int>arr,int idx,vector<int>ans,vector<vector<int>>&finalans){
    if(idx==arr.size()){
       finalans.push_back(ans); 
       return ;
    }
    subset(arr,idx+1,ans,finalans);
    ans.push_back(arr[idx]);
    subset(arr,idx+1,ans,finalans);
    
        
}
vector<vector<int>> print(vector<int>&arr){
    vector<int>ans;
    vector<vector<int>>finalans;
    subset(arr,0,ans,finalans);
    return finalans;
    

}


int main()
{
    vector <int> arr={1,2};
    
    vector<int>v;
    vector<vector<int>>finalans=print(arr);
    for (int i = 0; i < finalans.size(); i++) {
        for (int j = 0; j < finalans[i].size(); j++) {
            cout << finalans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
} 

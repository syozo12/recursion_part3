//store the subset vectors in a vector ans and return ans whithin 1  call
#include<iostream>
#include<vector>
using namespace std;
 vector<vector<int>> subset(vector<int>arr,int idx,vector<int>ans,vector<vector<int>>&finalans){
    if(idx==arr.size()){
       finalans.push_back(ans); 
       return finalans ;
    }
    subset(arr,idx+1,ans,finalans);
    ans.push_back(arr[idx]);
    return subset(arr,idx+1,ans,finalans);
    
        
}
/*vector<vector<int>> print(vector<int>&arr){
    vector<int>ans;
    vector<vector<int>>finalans;
    subset(arr,0,ans,finalans);
    return finalans;
    

}*/


int main()
{
    vector <int> arr={1,2};
    vector<int>ans;
    vector<int>v;
    vector<vector<int>>finalans;
    vector<vector<int>> fans =subset(arr,0,ans,finalans);
    for (int i = 0; i < fans.size(); i++) {
        for (int j = 0; j < fans[i].size(); j++) {
            cout << fans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
} 

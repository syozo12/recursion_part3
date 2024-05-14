//removing an int  from a integer  vector
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
vector<int> remove_int(int n,vector<int>v,vector<int>arr,int idx)//everytime new s and original is made so very bad tc
{
    if (idx==arr.size())
    {
       
        return v;
    }
    if (arr[idx] == n)
    {
        return remove_int(n, v, arr,idx+1);
    }
    else
    {
        v.push_back(arr[idx]);
        return remove_int(n, v, arr,idx+1);
    }
}
int main()
{
    vector<int>arr = {1,2,3,3,4,3,6,3};
    int n = 3;
    vector<int>v;
    vector <int> ans = remove_int(n, v, arr,0);
   // Print each element of the ans vector
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i] << " ";
    }
    //cout<<ans[1];
}
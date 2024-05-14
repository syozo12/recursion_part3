// duplicate elements in aaray
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>>subset(vector<int> arr, int idx, vector<int> ans, vector<vector<int>> &finalans, bool flag)
{
    if (idx == arr.size())
    {
        finalans.push_back(ans);
        return finalans;
    }
    if (idx == arr.size() - 1)
    {
        if (flag == true)
        {
            subset(arr, idx + 1, ans, finalans, true);
        }
        ans.push_back(arr[idx]);
        return subset(arr, idx + 1, ans, finalans, false);
        //so that else part wont get executed

    }
    if (arr[idx] == arr[idx + 1])
    {
        if (flag == true)
        {
            subset(arr, idx + 1, ans, finalans, true);
        }
        ans.push_back(arr[idx]);
         return subset(arr, idx + 1, ans, finalans, false);
    }
    else
    {
        if (flag == true)
        {
            subset(arr, idx + 1, ans, finalans, true);
        }
        ans.push_back(arr[idx]);
        return subset(arr, idx + 1, ans, finalans, true);
    }
}
/*vector<vector<int>> print(vector<int> &arr)
{
    vector<int> ans;
    vector<vector<int>> finalans;
    bool flag = true;
    subset(arr, 0, ans, finalans, flag);
    return finalans;
}*/
int main()
{
    vector<int> arr = {1, 2, 2};
    vector<int> ans;
    vector<vector<int>> finalans ;
      vector<vector<int>> fans=subset(arr, 0 , ans, finalans, true);
    for(int i=0;i<fans.size();i++){
        for(int j=0;j<fans[i].size();j++){
            cout<<fans[i][j];
        }
        cout<<endl;
    }
}
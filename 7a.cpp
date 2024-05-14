//print subset of a string containing duplicate characters ans store it
#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> subsets(vector<string>&finalans,string s,string ans,int idx,bool flag){
    if(idx==s.size()){
        finalans.push_back(ans);
        return finalans;
    }
    if(idx==s.size()-1){
        if(flag==true) subsets(finalans,s,ans+s[idx],idx+1,true);
        return subsets(finalans,s,ans,idx+1,true);

    }
    char ch1=s[idx];
    char ch2=s[idx+1];
    if(ch1==ch2){
        if(flag==true) subsets(finalans,s,ans+s[idx],idx+1,true);
        return subsets(finalans,s,ans,idx+1,false);
    }
    else{
        if(flag==true)subsets(finalans,s,ans+s[idx],idx+1,true);
        return subsets(finalans,s,ans,idx+1,true);

    }



}
int main(){
    string s="aab";
    vector<string>v;
    vector<string>finalans=subsets(v,s,"",0,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;


}
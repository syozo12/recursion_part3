//print subset of a string containing duplicate characters
#include<iostream>
#include<string>
using namespace std;
void subsets(string s,string ans,int idx,bool flag){
    if(idx==s.size()){
        cout<<ans<<endl;
        return;
    }
    if(idx==s.size()-1){
        if(flag==true) subsets(s,ans+s[idx],idx+1,true);
        subsets(s,ans,idx+1,true);
        return ;//otherwise the below statements will get executed

    }
    char ch1=s[idx];
    char ch2=s[idx+1];
    if(ch1==ch2){
        if(flag==true) subsets(s,ans+s[idx],idx+1,true);
        subsets(s,ans,idx+1,false);
    }
    else{
        if(flag==true)subsets(s,ans+s[idx],idx+1,true);
        subsets(s,ans,idx+1,true);

    }



}
int main(){
    string s="aab";
    subsets(s,"",0,true);
    return 0;


}
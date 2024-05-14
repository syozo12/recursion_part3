#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
vector<string> subsets(vector<string>&finalans,string s,string ans,int idx,bool flag){
    if(idx==s.size()){//when all the elements in the string are iterated
        finalans.push_back(ans);
         
        return finalans;
    }
    if(idx==s.size()-1){//for last element in the string s
       if(flag==true){
        //ans.push_back(s[idx]);//error
        subsets(finalans,s,ans+s[idx],idx+1,true);
       }
        return subsets(finalans,s,ans,idx+1,true);

    }
    char ch1=s[idx];
    char ch2=s[idx+1];
    if(ch1==ch2){//for 2 similar elements 
        if(flag==true){
            //ans.push_back(s[idx]);// ans+s[idx] inside the recursive call
         subsets(finalans,s,ans+s[idx],idx+1,true);
        }
        return subsets(finalans,s,ans,idx+1,false);
    }
    else{//normal 2 recursive calls 
        if(flag==true){
            //ans.push_back(s[idx]);
            subsets(finalans,s,ans+s[idx],idx+1,true);
        }
        return subsets(finalans,s,ans,idx+1,true);

    }



}
int main(){
    string s={"aab"};
    vector<string>v;
    subsets(v,s,{""},0,true);
    for(int i=0;i<v.size();i++){
       
            cout<<"________"<<v[i]<<endl;
    }
    return 0;


}
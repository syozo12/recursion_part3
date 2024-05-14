#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<string> print_permutations(vector<string> &v,string ans,string s){
    if(s.size()==0){
       v.push_back(ans);
       return v;
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string left=s.substr(0,i);//0 including i exclu
        string right=s.substr(i+1);//upto last 
        string s=left+right;
        print_permutations(v,ans+ch,s);
    }
    return v;//if return is inside the loop then whole loop wont run
}

int main(){
    string s="abc";
    vector<string> v;
    vector<string>ans =print_permutations(v,"",s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}
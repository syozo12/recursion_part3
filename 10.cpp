#include<iostream>
#include<string>
using namespace std;
int print_permutations(string ans,string s){
    if(s.size()==0){
       cout<<ans<<endl;
       return 1;
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string left=s.substr(0,i);//0 including i exclu
        string right=s.substr(i+1);//upto last 
        string s=left+right;
        print_permutations(ans+ch,s);
    }
}
int main(){
    string s="abc";
    print_permutations("",s);

}
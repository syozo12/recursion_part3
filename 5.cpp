//print subsets of a string with unique characters
#include<iostream>
using namespace std;
void subsets(string s,string original,int idx){//everytime same  original str  is passed
    if (idx==original.size())
    {
       cout<<s<<endl;
       return ;
    }
    subsets(s, original,idx+1);
    subsets(s + original[idx], original,idx+1);
}

int main()
{
    string s = "abc";
    subsets("", s,0);
   
} 

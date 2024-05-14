//print subsets of a string with unique characters 2 arguments
#include<iostream>
#include<string>
using namespace std;
void subsets(string s,string original){//everytime new str  original is passed
    if (original=="")
    {
       cout<<s<<endl;
       return ;
    }
    char ch=original[0];
    subsets(s,original.substr(1));
    subsets(s + ch,original.substr(1) );
}

int main()
{
    string s = "my";
    subsets("", s);
   
} 

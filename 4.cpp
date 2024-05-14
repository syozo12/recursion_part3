// removing a char from a string

#include <iostream>
#include<algorithm>
#include <string>
using namespace std;
string remove_char(char ch, string s, string original){//everytime new original str  is passed
    if (original=="")//if(original.size()==0)
    //original.size()<0 str cant be negative
    {
       cout<<s;
        return s;
    }
    if (original[0] == ch)
    {
        return remove_char(ch, s, original.substr(1));
    }
    else
    {
        return remove_char(ch, s + original[0],original.substr(1));
    }//if we put return then only .lines below function call is executed

}
int main()
{
    string s = "my name is radha";
    char ch = 'a';
    string ans = remove_char(ch, "", s);
    cout << ans;
}
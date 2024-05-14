// removing a char from a string with better space complexity
#include <iostream>
#include <string>
using namespace std;
string remove_char(char ch, string s, string original,int idx){//everytime same  original is passed
    if (idx==original.size())
    {
       
        return s;
    }
    if (original[idx] == ch)
    {
        return remove_char(ch, s, original,idx+1);
    }
    else
    {
        return remove_char(ch, s + original[idx], original,idx+1);
    }
}
int main()
{
    string s = "my name is radha";
    char ch = 'a';
    string ans = remove_char(ch, "", s,0);
    cout << ans;
}
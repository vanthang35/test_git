#include <vector>
#include <algorithm> 
#include <iostream>
using namespace std;

class solution
{
    public:
    bool isValidPalindrome(string s)
    {
        if(s.size() == 0 || s.size() == 1) return true;
        int i(0), j(s.size() - 1);
        while(s[i] == s[j] && i <j)
        {
            i++;
            j--;
        }
        return i>=j;
    }
    string longestPalindrome(string s)
    {
        if(s.size() == 0 || s.size() == 1) return s;
        string ret;
        int max;
        for(int i = 0; i <s.size(); i++)
        {
            for(int j = s.size(); j> i + maxlen; j --)
            {
                if(s[j] == s[i]) continue;
                string str = s.substr(i, j-i+1);
                if(isValidPalindrome(str) && str.size() > maxnlen)
                {
                    maxlen = str.size()
                    ret = str
                }
            }
        }
        return ret
    }
}
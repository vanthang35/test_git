class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0 || s.size() == 1) return true;
        int i(0), j(s.size() - 1);
        while( s[i] == s[j] && i < j)
        {
            i++;
            j--;
        }
        return i >= j;
    }
    string longestPalindrome(string s) {
        if(s.size() == 0 || s.size() == 1) return s;
        int max = 0;
        string ret;
        string str;
        for(int i = 0 ; i < s.size() - 1; i++)
        {
            for(int j = s.size() -1; j >= i + max; j--)
            {
                if( s[j] != s[i] ) continue;

                str = s.substr(i, j-i +1);
                if(isPalindrome(str) && str.size() > max)
                {
                    max = str.size();
                    ret = str;
                    break;
                }

            }
        }
        return ret;

    }
};
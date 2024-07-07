

// sol1 brute force
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
// sol2
class Solution2 {
public:
    string ans = "";
    void expand(string &s , int left ,int right)
    {
        while(left >= 0 &&  right < s.size())
        {
            if(s[left] != s[right])
                break;
            left--,right++;
        }
        if(ans.size() < right - left )
            ans = s.substr(left + 1 , right - left - 1);
    }
    string longestPalindrome(string s) {
        if(s.size() == 0 || s.size() == 1) return s;
        for(int i = 0 ; i < s.size() -1; i++)
        {
            expand(s , i , i);
            expand(s , i , i+1);
        }
        return ans;
    }
};
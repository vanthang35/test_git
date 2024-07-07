class Solution {
public:
    bool isPalindrome(string s) {
        string result = "";
        for(auto a: s)
        {
            if(isalnum(a))
            {
                result += tolower(a);
            }
        }
        if(result.size() == 0 || result.size() == 1) return true;
        int i(0);
        int j(result.size() - 1);
        while( result[i] == result[j] && i < j)
        {
            i++;
            j--;
        }
        return i >= j;
    }
};

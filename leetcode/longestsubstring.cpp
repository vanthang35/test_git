

#include <vector>
#include <algorithm> 
#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> box = {};
        int a =0;
        int max = -1;
        if(s.length() == 0)
        {
            return 0;
        }
        for(int i = 0 ; i< s.length();i++)
        {
            
            auto b = find(box.begin(), box.end(), s[i]);
            if(b == box.end())
            {
                box.push_back(s[i]);
                a = box.size();
                if(a>max)
                {
                    max = a;
                }
            }else{
                box.erase(box.begin(), b + 1);
                box.push_back(s[i]);
                a = box.size();
            }

        }
        return max;

    }
};
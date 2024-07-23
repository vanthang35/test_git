class Solution {
public:
    string removeKdigits(string num, int k) {
        if (k == 0) return num;
        if (num.size() <= k) return "0";
        
        deque<char> dq;
        for (char c : num) {
            while (!dq.empty() && k > 0 && dq.back() > c) {
                dq.pop_back();
                k--;
            }
            dq.push_back(c);
        }
        
        while (k > 0) {
            dq.pop_back();
            k--;
        }
        
        string result;
        bool leadingZero = true;
        for (char c : dq) {
            if (leadingZero && c == '0') continue;
            leadingZero = false;
            result.push_back(c);
        }
        
        return result.empty() ? "0" : result;
    }
};
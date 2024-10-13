class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      
        if (strs.empty()) {
            return "";
        }
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];
        int i = 0;
        while (i < s1.size() && i < s2.size()) {
            if (s1[i] == s2[i]) {
                i++;
            } else {
                break;
            }
        }
        if (i == 0) {
            return "";
        } else {
            return s1.substr(0, i);
        }
    }

    
};
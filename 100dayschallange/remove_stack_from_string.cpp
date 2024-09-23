class Solution {
public:
    string removeStars(string s) {
      stack<char> st;

    for (int i = 0; i < s.length(); ++i) {
        char ch = s[i];
        if (ch == '*') {
            if (!st.empty()) {
                st.pop();
            }
        } else {
            st.push(ch);
        }
    }

    string result;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    reverse(result.begin(), result.end());
    return result;
    }
};
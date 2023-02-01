class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i + 1);
            }
            else if (s[i] == ')') {
                if (st.size() > 0 && st.top() > 0) { st.pop(); }
                else { st.push(-(i + 1)); }
            }
        }
        while (!st.empty()) {
            int i = st.top();
            st.pop();
            s.erase(abs(i) -1, 1);
        }
        return s;
    }
};

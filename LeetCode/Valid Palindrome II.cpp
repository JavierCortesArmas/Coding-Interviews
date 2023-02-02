class Solution {
public:
    bool validPalindrome(string s) {
        string s2 = s; int i;
        reverse(s2.begin(), s2.end());
        if (s == s2) { return true; }
        for (i = 0; i < s.size(); i++) {
            if (s2[i] != s[i]) { break; }
        }
        s2.erase(s2.begin() + i);
        string s3 = s2;
        reverse(s3.begin(), s3.end());
        if (s2 == s3) { return true; }
        s.erase(s.begin() + i);
        s2 = s;
        reverse(s.begin(), s.end());
        if (s2 == s) { return true; }
        return false;
    }
};

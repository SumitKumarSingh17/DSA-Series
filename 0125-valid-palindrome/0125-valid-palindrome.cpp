class Solution {
public:
    bool isPalindrome(string s) {
        string newS = "";
        for (char i : s) {
            if (isalnum(i)) {
                newS += tolower(i);
            }
        }
        int l = 0, r = newS.size() - 1;
        while (l < r) {
            if (newS[l++] != newS[r--]) return false;
        }
        return true;
    }
};
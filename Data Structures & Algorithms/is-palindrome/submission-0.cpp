class Solution {
   public:
    bool isPalindrome(string s) {
        string newS;
        for (char& ch : s) {
            if (isalnum(ch)) {
                newS += tolower(ch);
            }
        }
        int st = 0;
        int end = (int)newS.length() - 1;
        while (st < end) {
            if (newS[st] != newS[end]) return false;
            st++;
            end--;
        }
        return true;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            int len = 0;
            for (int j = i; j < n; j++) {
                bool duplicate = false;
                for (int k = i; k < j; k++) {
                    if (s[k] == s[j]) {
                        duplicate = true;
                        break;
                    }
                }
                if (duplicate) break;
                len++;
            }
            if (len > maxLength) maxLength= len;
        }
        
        return maxLength;
    }
};

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char>seen;
        int left = 0;
        
        for (int right = 0; right < n; right++) {
            if (seen.count(s[right]) == 0) {
                seen.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
            } else {
                while (seen.count(s[right])) {
                    seen.erase(s[left]);
                    left++;
                }
                seen.insert(s[right]);
            }
        }
        
        return maxLength;
    }
};
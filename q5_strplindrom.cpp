#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int m_l = 1;
        for (int i = 0;i<s.size();i++){
            // for even 
            int left = i-1, right = i;
            while(left>=0 && right< s.size() && s[left] == s[right]){
                if (right - left + 1 > m_l) {
                    m_l = right - left + 1;
                    start = left;
                }
                left--; right++;
            }    
             // for odd
             left = i-1, right = i+1;
             while(left>= 0 && right < s.size() && s[left] == s[right]) {
                if  (right - left + 1 > m_l) {
                    m_l = right - left + 1;
                    start = left;
                }
                left--; right++;
             }
        }
        return s.substr(start,m_l);
    }
};
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long num = 0;

       
        while (s[i] == ' ' && i < s.length()) {
            i++;
        }

  
        if (s[i] == '-' || s[i] == '+') {
             if(s[i] == '-'){
                sign = -1 ;}
                else{

                 sign = 1;}
            i++;
        }

     
        while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            if (sign * num >= INT_MAX) return INT_MAX;
            if (sign * num <= INT_MIN) return INT_MIN;

            i++;
        }

        return sign * num;
    }
};

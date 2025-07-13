#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int n=x;
        long rev=0;
        long d;
        while(n!=0){
            d=n%10;
             if (rev > INT_MAX/10 || (rev == INT_MAX/10 && d > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN/10 && d < -8)) return 0;

            rev=rev*10+d;
            n/=10;
        }
        return rev;
    }
};
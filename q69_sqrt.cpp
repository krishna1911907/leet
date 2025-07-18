#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        long long i = 0;
        while (i * i <= x) {
            i++;
        }
        return i - 1;
    }
};

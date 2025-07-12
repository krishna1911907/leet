
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>=s.size())return s;
        vector<string>v(numRows);
        int i=0;
        int dir=1;
        for(char c:s){
            v[i]+=c;
            if(i==0){
                dir=1;
            } else if(i==numRows-1)
            dir=-1;

            i+=dir;
        }
        string r;
        for(const string &s1:v)
            r+=s1;
        return r;
    }
};
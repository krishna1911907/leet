#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>r;
        if(numRows>=1)
        r.push_back({1});
        if(numRows>=2)
        r.push_back({1,1});
        for(int i=2;i<numRows;i++){
            vector<int>r1(i+1,1);
            for(int j=1;j<i;j++){
                r1[j]=r[i-1][j]+r[i-1][j-1];
            }
            r.push_back(r1);
        }
        return r;
    }
};
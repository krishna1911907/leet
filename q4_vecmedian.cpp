#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        for(auto n:nums1){
            result.push_back(n);
        }
        for(auto n:nums2){
            result.push_back(n);
        }

        sort(result.begin(),result.end());
        int n1=result.size();

        if(n1%2){
            return result[n1/2];
        }else{
           return  (result[((n1/2)-1)]+result[n1/2])/2.0;
        }
    }
};
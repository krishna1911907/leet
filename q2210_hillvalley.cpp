#include <bits/stdC++.h>
using namespace std;

class Solution
{
public:
    int countHillValley(vector<int> &nums)
    {
        vector<int> t;
        t.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                t.push_back(nums[i]);
            }
        }

        int c = 0;
        for (int i = 1; i < t.size() - 1; i++)
        {
            if ((t[i] > t[i - 1] && t[i] > t[i + 1]) ||
                (t[i] < t[i - 1] && t[i] < t[i + 1]))
            {
                c++;
            }
        }

        return c;
    }
};

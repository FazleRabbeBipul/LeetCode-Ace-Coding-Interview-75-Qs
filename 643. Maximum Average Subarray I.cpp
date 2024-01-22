#include <bits/stdc++.h>
using namespace std;

// 643. Maximum Average Subarray I

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int n = nums.size(), ans = -INT_MAX;
        vector<int> cums(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
                cums[i] = nums[i];
            else
                cums[i] = cums[i - 1] + nums[i];
        }

        for (int i = k - 1; i < n; i++)
        {
            if (i - k < 0)
                ans = max(ans, cums[i]);
            else
                ans = max(ans, cums[i] - cums[i - k]);
        }

        double tem = ans / double(k);
        return tem;
    }
};
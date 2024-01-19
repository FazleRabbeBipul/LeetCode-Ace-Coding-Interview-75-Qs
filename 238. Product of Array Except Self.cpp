#include <bits/stdc++.h>
using namespace std;

// 238. Product of Array Except Self
// O(n)
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 1);
        for (int i = 0, res = 1; i < n; res *= nums[i], i++)
            ans[i] *= res;

        for (int i = n - 1, res = 1; i >= 0; res *= nums[i], i--)
            ans[i] = ans[i] * res;
        return ans;
    }
};
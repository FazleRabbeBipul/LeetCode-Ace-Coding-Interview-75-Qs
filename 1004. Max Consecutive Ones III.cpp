#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int n = nums.size(), r = 0, l = 0, ans = 0, one = 0, zero = 0;

        while (r < n)
        {
            if (nums[r] == 0)
            {
                zero++;
            }

            while (zero > k)
            {
                if (nums[l] == 0)
                    zero--;
                l++;
            }

            ans = max(ans, r - l + 1);
            r++;
        }

        return ans;
    }
};
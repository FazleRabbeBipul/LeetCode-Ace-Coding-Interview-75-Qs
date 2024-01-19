#include <bits/stdc++.h>
using namespace std;

// 334. Increasing Triplet Subsequence Time 0(n),Space O(n)
class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 3)
            return false;
        int f = INT_MAX, s = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= f)
                f = nums[i];
            else if (nums[i] <= s)
                s = nums[i];
            else
                return true;
        }

        return false;
    }
};

// 334. Increasing Triplet Subsequence Time 0(n), Space O(1)

class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int n = nums.size();

        int f = INT_MAX, s = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > s)
                return true;
            else if (nums[i] > f && nums[i] < s)
                s = nums[i];
            else if (nums[i] < f)
                f = nums[i];
        }

        return false;
    }
};
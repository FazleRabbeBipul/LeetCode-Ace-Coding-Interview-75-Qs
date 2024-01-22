#include <bits/stdc++.h>
using namespace std;

// 1679. Max Number of K - Sum Pairs O(n)

class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int l = 0, cnt = 0, r = nums.size() - 1;
        while (l < r)
        {
            if (nums[l] + nums[r] == k)
                l++, r--, cnt++;
            else if (nums[l] + nums[r] > k)
                r--;
            else
                l++;
        }
        return cnt;
    }
};
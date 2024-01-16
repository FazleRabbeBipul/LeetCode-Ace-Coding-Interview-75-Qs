#include <bits/stdc++.h>>
using namespace std;

// Tag: Array/String

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &v, int x)
    {
        int mx1 = v[0], mx2 = 0, n = v.size();
        for (int i = 1; i < n; i++)
        {
            if (v[i] >= mx1)
                mx2 = mx1, mx1 = v[i];
            else
            {
                if (v[i] > mx2)
                    mx2 = v[i];
            }
        }

        vector<bool> ans;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mx1)
                ans.push_back(true);
            else
            {
                bool ok = false;
                if (v[i] + x >= mx1)
                    ok = true;
                ans.push_back(ok);
            }
        }

        return ans;
    }
};
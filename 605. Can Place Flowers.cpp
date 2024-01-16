#include <bits/stdc++.h>>
using namespace std;

/* 605. Can Place Flowers , Array+String*/

class Solution
{
public:
    bool canPlaceFlowers(vector<int> &v, int m)
    {
        int n = v.size(), cnt = 0;
        if (n == 1)
            return ((1 - v[0]) >= m);

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
                continue;

            if (i == 0)
            {
                if ((v[i + 1] == 0) && (i + 1 < n))
                    cnt++, v[i] = 1;
            }
            else if (i == n - 1)
            {
                if (v[i - 1] == 0)
                    cnt++;
            }
            else
            {
                if ((v[i - 1] == 0) && (v[i + 1] == 0) && (i + 1 < n))
                    cnt++, v[i] = 1;
            }
        }

        return (cnt >= m);
    }
};
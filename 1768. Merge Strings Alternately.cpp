#include <bits/stdc++.h>
using namespace std;
// 1768. Merge Strings Alternately

class Solution
{
public:
    string mergeAlternately(string s1, string s2)
    {
        string s = "";
        int i = 0, n = s1.size(), m = s2.size();

        while (i < n || i < m)
        {
            if (i < n)
                s += s1[i];
            if (i < m)
                s += s2[i];
            i++;
        }

        return s;
    }
};
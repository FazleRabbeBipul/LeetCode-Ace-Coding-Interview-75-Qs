#include <bits/stdc++.h>
using namespace std;
/*
1071. Greatest Common Divisor of Strings
*/

class Solution
{
public:
    string gcdOfStrings(string s1, string s2)
    {
        int sz1 = s1.size(), sz2 = s2.size();
        int l = min(sz1, sz2), len = 0;

        for (; l >= 1; l--)
        {
            bool ok = true;
            if ((sz1 % l) || (sz2 % l))
                continue;

            string x = s1.substr(0, l);
            for (int i = 0; i < sz1; i += l)
            {
                string tem = s1.substr(i, l);
                if (tem != x)
                {
                    ok = false;
                    break;
                }
            }

            for (int i = 0; i < sz2; i += l)
            {
                string tem = s2.substr(i, l);
                if (tem != x)
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
            {
                len = l;
                break;
            }
        }

        string ans = s1.substr(0, len);
        return ans;
    }
};

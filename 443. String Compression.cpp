#include <bits/stdc++.h>
using namespace std;

// 443. String Compression

// In 0ms runtime, solution, just two pointer technique

class Solution
{
public:
    int compress(vector<char> &chars)
    {
        chars.push_back('*');
        int n = chars.size(), in = 0, cnt = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (chars[i] == chars[i + 1])
                cnt++;
            else
            {
                chars[in] = chars[i];
                in++;
                string s = to_string(cnt);

                if (s != "1")
                {
                    for (auto it : s)
                    {
                        chars[in] = it;
                        in++;
                    }
                }
                cnt = 1;
            }
        }
        return in;
    }
};
#include <bits/stdc++.h>
using namespace std;

/* 345. Reverse Vowels of a String , day 01*/

class Solution
{
public:
    string reverseVowels(string s)
    {
        int n = s.size();
        vector<int> pos;

        for (int i = 0; i < n; i++)
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' ||
                s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
                pos.push_back(i);

        int l = 0, r = pos.size() - 1;

        while (l < r)
        {
            swap(s[pos[l]], s[pos[r]]);
            l++, r--;
        }
        return s;
    }
};
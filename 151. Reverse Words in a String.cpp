#include <bits/stdc++.h>
using namespace std;

// 151. Reverse Words in a String

// Solution01 : 13 ms
// Solution02 : 3 ms

class Solution01
{
public:
    string reverseWords(string s)
    {

        while (!s.empty() && s[0] == ' ')
            s.erase(s.begin());

        reverse(s.begin(), s.end());

        while (!s.empty() && s[0] == ' ')
            s.erase(s.begin());

        int l = 0, r;
        int st = l, ed;

        for (int i = l; i <= s.size() - 1; i++)
        {
            if (s[i] == ' ')
            {
                ed = i - 1;
                while (st < ed)
                {
                    swap(s[st], s[ed]);
                    st++, ed--;
                }

                st = i + 1;
                while ((s[i + 1] == ' ') && ((i + 1) < s.size()))
                {
                    s.erase(s.begin() + i + 1);
                }
            }
        }

        r = s.size() - 1;
        while (st <= r)
        {
            swap(s[st], s[r]);
            st++, r--;
        }

        return s;
    }
};

// Solution02: 3ms
// Hints 1: use two pointer
// Hints 2: we can iterate the string and modify the previous part , that we have already visited.
// Solve: i)first Reverse
//        ii) ignore space in leading , Add some char & when get ' '(space)  add one, ignore multiple space
///       iii) reverse previous non reversed portion only
///       iv) Finally, cut the modified portion, and return it.

// Code:
// 'ind' indicate our modified portions, last index.
// 'it' for iterate the whole string 0 to s.size()

class Solution
{
public:
    string reverseWords(string s)
    {
        reverse(s.begin(), s.end());
        int ind = 0, it = 0, st = 0, n = s.size();

        while (it < n)
        {
            if (s[it] == ' ')
            {
                if (ind != 0)
                {
                    reverse(s.begin() + st, s.begin() + ind);
                    s[ind] = s[it];
                    ind++, it++;
                    st = ind;
                }

                while (s[it] == ' ' && (it < n))
                    it++;
            }
            else
            {
                s[ind] = s[it];
                ind++, it++;
            }
        }

        if (s[ind - 1] == ' ')
            s = (s.substr(0, ind - 1));
        else
        {
            reverse(s.begin() + st, s.begin() + ind);
            s = (s.substr(0, ind));
        }
        return s;
    }
};
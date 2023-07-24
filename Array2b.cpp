#include <bits/stdc++.h>
using namespace std;

//   MERGE INTERVALS

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    int i, j, n = intervals.size(), st, en;
    j = 1;
    i = 0;
    vector<int> f(2), s(2);
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    f = intervals[0];
    res.push_back(f);
    while (j < n)
    {
        s = intervals[j];
        f = res[i];
        if (s[0] >= f[0] && s[0] <= f[1])
            res[i][1] = max(f[1], s[1]);
        else
        {
            res.push_back(s);
            i++;
        }
        j++;
    }
    return res;
}
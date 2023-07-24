#include <bits/stdc++.h>
using namespace std;

//   PASCAL'S TRIANGLE

vector<vector<int>> generate(int numRows)
{
    int n = numRows;
    vector<vector<int>> ans;
    vector<int> prev;
    prev.push_back(1);
    ans.push_back(prev);
    if (n == 1)
        return ans;
    prev.push_back(1);
    ans.push_back(prev);
    if (n == 2)
        return ans;
    else
    {
        for (int i = 3; i < n + 1; i++)
        {
            vector<int> cur(i);
            cur[0] = 1;
            cur[i - 1] = 1;
            for (int k = 1; k < i - 1; k++)
            {
                cur[k] = prev[k] + prev[k - 1];
            }
            ans.push_back(cur);
            prev = cur;
        }
    }
    return ans;
}
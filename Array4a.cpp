#include <bits/stdc++.h>
using namespace std;

//   LONGEST CONSECUTIVE SEQUENCE

int longestConsecutive(vector<int> &nums)
{
    int ans = 0, mx = 0, n = nums.size();

    unordered_set<int> st;
    for (auto x : nums)
        st.insert(x);
    for (auto x : nums)
    {
        if (st.find(x - 1) != st.end())
            continue;
        else
        {
            ans = 1;
            while (st.find(x + 1) != st.end())
            {
                ans++;
                x++;
            }
            mx = max(mx, ans);
        }
    }

    return max(mx, ans);
}
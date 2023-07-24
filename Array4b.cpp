#include <bits/stdc++.h>
using namespace std;

//   TWO SUM

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> ans(2);
    map<int, int> tmp;
    int n = nums.size(), i, j;
    for (i = 0; i < n; i++)
    {
        j = target - nums[i];
        if (tmp.find(j) != tmp.end())
        {
            ans[0] = i;
            ans[1] = tmp[j];
            break;
        }
        tmp[nums[i]] = i;
    }
    return ans;
}
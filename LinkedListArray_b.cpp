#include <bits/stdc++.h>
using namespace std;

//   THREE SUM

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> ans;
    if (nums.size() < 3)
        return ans;
    set<vector<int>> tans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;
        vector<int> tp;
        while (j < k)
        {
            int data = nums[i] + nums[j] + nums[k];

            if (data == 0)
            {
                tp.push_back(nums[i]);
                tp.push_back(nums[j]);
                tp.push_back(nums[k]);
                tans.insert(tp);
                tp.clear();
                j++;
                k--;
            }
            else if (data > 0)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    for (auto i : tans)
        ans.push_back(i);
    return ans;
}
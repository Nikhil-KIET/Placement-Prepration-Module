#include <bits/stdc++.h>
using namespace std;

//    NEXT PERMUTATION

void nextPermutation(vector<int> &nums)
{
    int temp = 0, ch = 0, key = 0;
    for (int i = nums.size() - 1; i > 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            key = nums[i - 1];
            for (int j = nums.size() - 1; j >= i - 1; j--)
            {
                if (nums[j] > key)
                {
                    nums[i - 1] = nums[j];
                    nums[j] = key;
                    sort(nums.begin() + (i), nums.end());
                    ch = 1;
                    break;
                }
            }
            break;
        }
    }
    if (ch == 0)
    {
        sort(nums.begin(), nums.end());
    }
}
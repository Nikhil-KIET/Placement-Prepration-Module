#include <bits/stdc++.h>
using namespace std;

//    SINGLE ELEMENT IN A SORTED ARRAY

int binarySearch(int l, int h, vector<int> &arr)
{
    int n, mid, rn, ln;
    n = h - l + 1;
    mid = l + (h - l) / 2;
    if (n == 1)
        return arr[mid];
    bool f1, f2;
    f1 = arr[mid] == arr[mid - 1];
    f2 = arr[mid] == arr[mid + 1];
    ln = mid - l + 1;
    rn = h - mid + 1;
    if (f1)
    {
        if (ln % 2 == 0)
        {
            return binarySearch(mid + 1, h, arr);
        }
        return binarySearch(l, mid - 2, arr);
    }
    else if (f2)
    {
        if (rn % 2 == 0)
        {
            return binarySearch(l, mid - 1, arr);
        }
        return binarySearch(mid + 2, h, arr);
    }
    return arr[mid];
}
int singleNonDuplicate(vector<int> &nums)
{
    return binarySearch(0, nums.size() - 1, nums);
}
#include <bits/stdc++.h>
using namespace std;

// Kth LARGEST ELEMENT IN AN ARRAY

int findKthLargest(vector<int> &nums, int k)
{
    int cnt = 0;
    priority_queue<int> q;
    for (auto x : nums)
        q.push(x);
    for (int i = 0; i < k - 1; i++)
        q.pop();
    return q.top();
}
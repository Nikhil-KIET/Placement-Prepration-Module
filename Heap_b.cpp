#include <bits/stdc++.h>
using namespace std;

//    Top K Frequent Elements

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.first > b.first;
}
vector<int> topKFrequent(vector<int> &nums, int k)
{
    map<int, int> fq;
    for (auto x : nums)
        fq[x]++;
    float n;
    vector<float> v;
    vector<int> ans;
    vector<pair<int, int>> mp;
    for (auto x : fq)
    {
        mp.push_back(make_pair(x.second, x.first));
    }
    sort(mp.begin(), mp.end(), cmp);
    // for(auto x:mp)
    //     cout<<x.second<<":"<<x.first<<" ";
    for (int i = 0; i < k; i++)
    {
        ans.push_back(mp[i].second);
    }
    // cout<<"\n";
    return ans;
}
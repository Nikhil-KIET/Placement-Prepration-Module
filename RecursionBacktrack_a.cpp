#include <bits/stdc++.h>
using namespace std;


//PERMUTATIONS

vector<vector<int>> ans;
    void genp(vector<int> nums,vector<int> v,int n,vector<int> chk)
    {
        if(v.size()==n)
        {
            ans.push_back(v);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(chk[i]==0)
            {
                chk[i]=1;
                v.push_back(nums[i]);
                genp(nums,v,n,chk);
                chk[i]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>p,r(nums.size());
        genp(nums,p,nums.size(),r);
        return ans;
    }
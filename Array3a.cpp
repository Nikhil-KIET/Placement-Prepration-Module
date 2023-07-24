#include <bits/stdc++.h>
using namespace std;

//   MAJORITY ELEMENT

int majorityElement(vector<int>& nums) {
        int elem,ct=0;
        for(auto x:nums){
            if(ct==0) elem=x;
            if(elem==x) ct++;
            else ct--;
        }
        return elem;
    }
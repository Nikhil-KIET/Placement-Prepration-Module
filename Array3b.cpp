#include <bits/stdc++.h>
using namespace std;

//    Search a 2D Matrix

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();
    vector<int> row;
    for (auto x : matrix)
    {
        row = x;
        if ((row[0] <= target) && (target <= row[m - 1]))
        {
            for (auto i : row)
            {
                if (i == target)
                    return true;
            }
        }
    }
    return false;
}
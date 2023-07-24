#include <bits/stdc++.h>
using namespace std;

//    SET MATRIX ZEROES

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size(), m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < m; k++)
                {
                    if (k != j && matrix[i][k] != 0)
                        matrix[i][k] = -10;
                }
                for (int k = 0; k < n; k++)
                {
                    if (k != i && matrix[k][j] != 0)
                        matrix[k][j] = -10;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            if (matrix[i][j] == -10)
                matrix[i][j] = 0;
    }
}
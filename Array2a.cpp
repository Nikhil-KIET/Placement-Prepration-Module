#include <bits/stdc++.h>
using namespace std;

//    ROTATE MATRIX

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size(), low, high, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    low = 0;
    high = n - 1;
    while (low < high)
    {
        for (int k = 0; k < n; k++)
        {
            temp = matrix[k][low];
            matrix[k][low] = matrix[k][high];
            matrix[k][high] = temp;
        }
        low++;
        high--;
    }
}
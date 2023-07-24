#include <bits/stdc++.h>
using namespace std;

//    RAT IN A MAZE

void solve(int i, int j, vector<vector<int>> &m, int n, vector<string> &ans, vector<vector<int>> &vis,
           string move, vector<int> &di, vector<int> &dj)
{
    if (i == n - 1 && j == n - 1)
    {
        ans.push_back(move);
        return;
    }
    string s = "DLRU";
    for (int idx = 0; idx < 4; idx++)
    {
        int nexti = i + di[idx];
        int nextj = j + dj[idx];
        if (nexti >= 0 && nexti < n && nextj >= 0 && nextj < n && !vis[nexti][nextj] && m[nexti][nextj])
        {
            vis[i][j] = 1;
            solve(nexti, nextj, m, n, ans, vis, move + s[idx], di, dj);
            vis[i][j] = 0;
        }
    }
}
vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    vector<int> di = {+1, 0, 0, -1};
    vector<int> dj = {0, -1, +1, 0};
    if (m[0][0] == 1)
        solve(0, 0, m, n, ans, vis, "", di, dj);
    return ans;
}
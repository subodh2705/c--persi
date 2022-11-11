// https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?leftPanelTab=1
#include <bits/stdc++.h>
int func(int n, vector<int> &h, vector<int> &dp)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int left = func(n - 1, h, dp) + abs(h[n] - h[n - 1]);

    int right = INT_MAX;
    if (n > 1)
    {
        right = func(n - 2, h, dp) + abs(h[n] - h[n - 2]);
    }
    return dp[n] = min(left, right);
}
int frogJump(int n, vector<int> &h)
{
    // Write your code here.
    vector<int> dp(n + 1, -1);
    return func(n - 1, h, dp);
}

vector<int> dp(n, 0);
dp[0] = 0;
for (int i = 1; i < n; i++)
{
    int fs = dp[i - 1] + abs(h[i] - h[i - 1]);
    int rs = INT_MAX;
    if (i > 1)
    {
        rs = dp[i - 2] + abs(h[i] - h[i - 2]);
    }
    dp[i] = min(rs, fs);
}
return dp[n - 1];
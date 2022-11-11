// C++ program to count number of
// ways to reach Nth stair
#include <bits/stdc++.h>
using namespace std;

// A simple recursive program to
// find N'th fibonacci number
int fib(int n, int dp[])

{
    if (n <= 1)
    {
        dp[n] = 1;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

// Driver C
int main()
{
    int s = 5;
    int dp[s + 1];
    memset(dp, -1, sizeof dp);
    cout << "Number of ways = " << fib(s, dp);

    return 0;
}

// _ _ _ _ _

// This code is contributed by shubhamsingh10

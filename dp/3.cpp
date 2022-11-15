// https: // www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
#include <bits/stdc++.h>
// int func(vector<int> &nums, int ind, vector<int> &dp)
// {
//     if (ind == 0)
//         return nums[ind];
//     if (ind < 0)
//         return 0;
//     if (dp[ind] != -1)
//         return dp[ind];
//     int pick = nums[ind] + func(nums, ind - 2, dp);
//     int notpick = 0 + func(nums, ind - 1, dp);
//     return dp[ind] = max(pick, notpick);
// }
// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> dp(n, -1);
//     int c = func(nums, n - 1, dp);
//     return c;
// }





// ****************************************************************************************************************************

// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<int> dp(n, -1);
//     dp[0] = nums[0];
//     for (int i = 1; i < n; i++)
//     {
//         int take = nums[i];
//         if (i > 1)
//             take += dp[i - 2];
//         int nottake = 0 + dp[i - 1];
//         dp[i] = max(take, nottake);
//     }
//     return dp[n - 1];
// }





// ****************************************************************************************************************************

#include <bits/stdc++.h>

// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     int n = nums.size();
//     int curr = 0, prev1 = nums[0], prev2 = 0;

//     for (int i = 1; i < n; i++)
//     {
//         int take = nums[i];
//         if (i > 1)
//             take += prev2;
//         int nottake = 0 + prev1;
//         curr = max(take, nottake);

//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return prev1;
// }
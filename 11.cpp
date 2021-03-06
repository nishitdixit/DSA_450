
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        if (nums.size() <= 1)
            return -1;
        int p1 = nums[0];
        int p2 = nums[nums[0]];
        while (p1 != p2)
        {
            p1 = nums[p1];
            p2 = nums[nums[p2]];
        }
        p2 = 0;
        while (p1 != p2)
        {
            p1 = nums[p1];
            p2 = nums[p2];
        }
        return p1;
    }
};

// class Solution
// {
// public:
//     int findDuplicate(vector<int> &nums)
//     {
//         int expected_xor = 0;
//         int n = nums.size() - 1;
//         for (int i = 1; i <= n; i++)
//         {
//             expected_xor = expected_xor ^ i;
//         }
//         int xor_arr = 0;
//         for (int i = 0; i <= n; i++)
//         {
//             xor_arr = xor_arr ^ nums[i];
//         }
//         return (xor_arr ^ expected_xor);
//     }
// };

// { Driver Code Starts.

int main()
{
    int t;
    vector<int> nums;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            // cout << i << " ";
            nums.push_back(arr[i]);
        }
    }
    return 0;
}
// } Driver Code Ends
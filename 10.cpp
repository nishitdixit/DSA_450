//TODO: yet to be completed

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        int maxSteps = arr[0];
        if (n == 1)
            return 0;
        int jumpCount = 1;
        int i = 0;
        int index = i + 1;
        while (i + maxSteps < n - 1)
        {

            int subMax = -1;
            for (int j = i + 1; j <= maxSteps + i; j++)
            {
                if (subMax < arr[j])
                {
                    subMax = arr[j];
                    index = j;
                }
            }
            maxSteps = subMax;
            if (maxSteps == 0)
                break;
            i = index;
            jumpCount++;
            if (maxSteps + i >= n - 1)
                break;
        }
        return jumpCount;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends
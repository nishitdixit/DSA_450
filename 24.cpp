//TODO
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        int arr2[N];
        for (int i = 0; i < N; i++)
        {
            arr2[arr[i]] = -1;
        }
        int longestConsecutiveLength = 0;
        int currConsLength;
        for (int i = 0; i < N; i++)
        {
            if (arr2[i] == -1 && arr2[i - 1] == -1)
            {
                longestConsecutiveLength = max(currConsLength + 1, longestConsecutiveLength);
            }
            else if (arr2[i] == -1 && arr2[i - 1] != -1)
            {
                currConsLength = 0;
                longestConsecutiveLength = max(currConsLength + 1, longestConsecutiveLength);
            }
        }
        return longestConsecutiveLength;
    }
    
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends
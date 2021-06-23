// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        int index1 = intervals[0][0], index2 = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++)
        {
            if (index2 < intervals[i][0])
            {
                res.push_back({index1, index2});
                index1 = intervals[i][0];
                index2 = intervals[i][1];
            }
            else
            {
                index2 = max(intervals[i][1], index2);
            }
        }
        res.push_back({index1, index2});
        return res;
    }
};

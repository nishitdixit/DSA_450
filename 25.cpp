// { Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        unordered_map <int,int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        int countOfElement=0;
        for (auto i=m.begin();i!=m.end();i++)
        {
            if(i->second>(n/k))
            {
                // cout<<i->first<<" ";
                countOfElement++;
            }
        }
        return countOfElement;
        
        
    }
};


// { Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
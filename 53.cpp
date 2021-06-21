// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";
        unordered_map<char, char> m;
        string res = countAndSay(n - 1);
        for (int i = 0; i < res.length(); i++)
        {
            m[res[i]]++;
        }
        int i=0;
        while(m.size()!=0){
            m.at(i);
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countAndSay(n);
        cout << ans << "\n";
    }

    return 0;
} // } Driver Code Ends
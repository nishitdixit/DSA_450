//TODO: its yet to be completed
// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        int min = arr[0], max = arr[0], modMin = 0, modMax = 0;
        for (int i = 0; i < n; i++)
        {
            if (min > arr[i])
                min = arr[i];
            if (max < arr[i])
                max = arr[i];
            cout << "arr " << arr[i] << " " << min << " " << max << endl;
        }
        cout << "max " << max;
        cout << "\nmin " << min << endl;
        int avg = (max + min) / 2;
        modMin = min + k;
        modMax = max - k;
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] <= avg - k) || (arr[i] >= avg + k))
            {
               if(arr[i] >= avg + k){
                   modMax<arr[i]-k?modMax=arr[i]-k:;
               }else{

               }
            }
            else
            {
                if ((modMin > arr[i] - k) && ((arr[i] - k) >= 0))
                    modMin = arr[i] - k;
                if ((modMax < arr[i] + k))
                    modMax = arr[i] + k;
            }
        }
        cout << "maxmod " << modMax;
        cout << "\nminmod " << modMin << endl;
        return modMax - modMin;
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
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends
  // 2
  // 2 4
  // 1 5 8 10
  // 3 5
  // 3 9 12 16 20
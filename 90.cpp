// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );
int last(int arr[], int x, int n);
int last(int arr[], int x, int n);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    vector<int> v;
     v[0]= first(arr, n, x);
     v[1]= last(arr, n, x);
     return v;
}   
int first(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
         
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
         
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        // If arr[mid] is same as x, we
        // update res and move to the left
        // half.
        else
        {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}
 
/* If x is present in arr[] then returns
the index of LAST occurrence of x in
arr[0..n-1], otherwise returns -1 */
int last(int arr[], int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high)
    {
         
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
         
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
 
        // If arr[mid] is same as x, we
        // update res and move to the right
        // half.
        else
        {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}
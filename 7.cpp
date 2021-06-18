// { Driver Code Starts
//Initial Template for C++

#include <iostream>

using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++)
            cin >> a[i];
        rotate(a, n);
        for (i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

//User function Template for C++

void rotate(int arr[], int n)
{
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
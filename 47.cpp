#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        // cout << "inside method" << endl;
        int size = s.size();
        for (int i = 0; i < (size / 2); i++)
        {
            // cout << "inside method loop" << endl;
            swap(s[i], s[size - i - 1]);
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char input;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            v.push_back(input);
        }
        // cout << "taken input" << endl;
        Solution ob;
        // cout << "calling method" << endl;
        ob.reverseString(v);
        // cout << "called method" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}

// C++ program of above implementation
#include <iostream>
using namespace std;

// Structure is used to return
// two values from minMax()
struct Pair
{
    int min;
    int max;
};

int main()
{
    int arr[] = {1000, 11, 445,
                 1, 330, 3000};
    int arr_size = 6;

    Pair minmax = getMinMax(arr, arr_size);

    cout << "nMinimum element is "
         << minmax.min << endl;
    cout << "nMaximum element is "
         << minmax.max;

    return 0;
}

struct Pair getMinMax(int arr[], int n)
{
    struct Pair minMax;
    minMax.min = arr[0];
    minMax.max = arr[0];
    for (int i = 0; i < n - 1; i += 2)
    {
        if (arr[i] < arr[i + 1])
        {
            minMax.max = arr[i + 1];
        }
        else
        {
            minMax.min = arr[i+1];
        }
    }
}
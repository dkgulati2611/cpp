#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int max;
    int min;
};

Pair getMinMax(int arr[], int low, int high)
{
    struct Pair minmax, mmr, mml;
    int mid;
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    if (high == low + 1)
    {
        if (arr[high] < arr[low])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    mid = (low + high) / 2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid + 1, high);

    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    if (mml.max < mmr.max)
        minmax.max = mmr.max;
    else
        minmax.max = mml.max;

    return minmax;
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    struct Pair minmax = getMinMax(arr, 0, n - 1);
    cout << minmax.max << " " << minmax.min << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
double findMean(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
 
    return (double)sum / (double)n;
}
double findMedian(int arr[], int n){
    sort(arr, arr + n);
    if (n % 2 != 0)
        return (double)arr[n / 2];
 
    return (double)(arr[(n - 1) / 2] + arr[n / 2]) / 2.0;
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(auto &i : arr){
        cin>>i;
    }
    cout << "Mean = " << findMean(arr, n) << endl;
    cout << "Median = " << findMedian(arr, n) << endl;
    return 0;
}
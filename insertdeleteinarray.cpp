#include <iostream>
using namespace std;
int* insertX(int n, int arr[],int x, int pos)
{
    int i;n++;
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = x;  
    return arr;
}
int deleteElement(int arr[], int n, int x)
{
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
if (i < n)
{
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
return n;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        {cin>>arr[i];}cout<<endl;
    for (int i = 0; i < n; i++)
        {cout << arr[i] << " ";}cout << endl;
    int x;cin>>x;int pos;cin>>pos;
    insertX(n, arr, x, pos);
    for (int i = 0; i < n + 1; i++)
        {cout << arr[i] << " ";}cout << endl;
    int x2;cin>>x2;
    int n2 = deleteElement(arr,n+1,x2);
    for (int i = 0; i < n2; i++)
        {cout << arr[i] << " ";}cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pi (3.141592653589)
#define mod 1e9+7
#define ll long long
#define vi vector<int>
#define vf vector<float>
#define vc vector<char>
#define db double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define minn(a, b, c) min(c, min(a, b))
#define mini(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(j,i,n) for(int j = i;j<n;j++)
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;int n2 = r - mid;
    int a[n1];int b[n2];
    rep(i,n1)
    {a[i] = arr[l + i];}
    rep(i,n2)
    { b[i] = arr[mid + i + 1]; }
    int i = 0;int j = 0; int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void mergesort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[2*n];
    rep(i,2 * n)    cin>>arr[i];
    mergesort(arr,0,2*n - 1);
    // rep(i,2*n){
    //     cout<<arr[i]<<endl;
    // }
    repp(i,n,2*n){
        cout<<arr[i]<<" ";
    }
    return 0;
}
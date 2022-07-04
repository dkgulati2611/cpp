#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define en '\n' 
#define pi (3.141592653589)
#define mod 1e9+7
#define ll long long
#define vi vector<int>
#define db double
#define pb push_back
#define all(c) c.begin(), c.end()
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(j,i,n) for(int j = i;j<n;j++)
void solve();
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
void solve(){
    int n;
    cin >> n;
    int arr[n];
    int q = 1;
    if (n == 1)
    {
        cout << "1\n";
        return;
    }
    for (int i = 0; i < n - 1; i += 2)
    {
        arr[i] = q;
        arr[i + 1] = 2 * q;
        q += 2;
    }
    if (n % 2 != 0)
    {
        arr[n - 1] = arr[n - 2] + 1;
    }
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
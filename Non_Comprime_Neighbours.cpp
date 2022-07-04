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
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n+1);
        rep(i,1,n+1){
            cin>>a[i];
        }
        int i = 1, c = 1;

        while (i <= n)
        {
            if (c)
            {
                a[i] = a[i + 1] * 2;
                i += 2;
            }
            else
            {
                a[i] = a[i - 1] * 2;
                i++;
            }

            c = 1 - c;
        }
        rep(i,1,n+1){
            cout<<a[i]<<" ";
        }
        cout<<en;
    }
    return 0;
}
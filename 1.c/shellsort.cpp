#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi (3.141592653589);
#define mod 1e9+7;
#define ill int long long;
#define vi vector<int>;
#define vf vector<float>;
#define vc vector<char>;
#define db double;
#define pb push_back;
#define mp make_pair;
#define ff first;
#define ss second;
#define all(c) c.begin(), c.end();
#define minn(a, b, c) min(c, min(a, b));
#define mini(a, b, c, d) min(d, min(c, min(a, b)));
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(j,i,n) for(int j = i;j<=n;j++)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    rep(i,n) cin>>arr[i];

    for(int k = n/2;k>0; k/=2){
        repp(i,k,n){
            int temp = arr[i];
            int j;
            for(j = i;j>=k && arr[j-k]>temp;j -= k){
                arr[j] = arr[j-k];
            }
            arr[j] = temp;
        }
    }
    rep(i,n) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
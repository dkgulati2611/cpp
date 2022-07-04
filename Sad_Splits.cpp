#include <bits/stdc++.h>
using namespace std;
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define en '\n'
#define pi (3.141592653589)
#define mod 1e9 + 7
#define ll long long
#define vi vector<int>
#define db double
#define pb push_back
#define all(c) c.begin(), c.end()
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(j, i, n) for (int j = i; j < n; j++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string ans = "NO";
        int counte = 0, counto = 0;
        string s = to_string(n);
        int l = (int)s[s.length()-1];
        rep(i,0,s.length()){
            if(l%2==0){
                if((int)s[i]%2 == 0 && i!=s.length()-1){
                    ans = "YES";
                    break;
                }
                else {
                    ans = "NO";
                }
            }
            else{
                if((int)s[i]%2 != 0 && i!=s.length()-1){
                    ans = "YES";
                    break;
                }
                else {
                    ans = "NO";
                }
            }
        }
        // while (n!=0)
        // {
        //     int r = n % 10;
        //     if (r % 2 == 0)
        //     {
        //         counte++;
        //     }
        //     else
        //     {
        //         counto++;
        //     }
        //     n/=10;
        // }
        // if(counte>=2 || counto>=2){
        //     ans = "YES";
        // }
        cout << ans << en;
    }
    return 0;
}
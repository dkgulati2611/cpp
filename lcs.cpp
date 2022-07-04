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
int solve(string A, string B) {
    int matrix[A.length() + 1][B.length() + 1];
    rep(i,0,A.length()+1)
    {
        rep(j,0,B.length()+1)
        {
            matrix[i][j] = 0;
        }
    }
    rep(i,1,A.length()+1)
    {
        rep(j,1,B.length()+1)
        {
            matrix[i][j] = max((A[i - 1] == B[j - 1] ? 1 : 0) + matrix[i - 1][j - 1], max(matrix[i - 1][j], matrix[i][j - 1]));
        }
    }
    return matrix[A.length()][B.length()];
}
int main()
{

    
    return 0;
}

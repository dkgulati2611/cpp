#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
int n,m;
vector<bool> vis;
int get_compo(int idx){
    if (vis[idx])
    {
        return 0;
    }
    vis[idx] = true;
    int ans = 1;
    for(auto i : adj[idx]){
        if (!vis[i])
        {
            ans += get_compo(i);
            vis[i] = true;
        }
        
    }
    return ans;
}
int main()
{
    cin>>n>>m;
    adj = vector<vector<int>> (n);
    vis = vector<bool> (n);
    int x,y;
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> compo;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            compo.push_back(get_compo(i));
        }
        
    }
    for(auto i : compo){
        cout<<i<<" ";
    }
    long long ans = 0;
    for(auto i: compo){
        ans += i*(n-i);
    }
    cout<<ans/2<<endl;
    return 0;
}
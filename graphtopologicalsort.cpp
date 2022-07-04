#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt = 0;
    vector<vector<int>> adj_lst(n);
    vector<int> indegr(n,0);
    for(int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj_lst[u].push_back(v);
        indegr[v]++;
    }
    queue<int> q;
    for(int i =0;i<n;i++){
        if(indegr[i] == 0){
            q.push(i);
        }
    }
    while (!q.empty()){
        cnt++;
        int x = q.front();
        q.pop();
        cout<<x<<" ";
        for(auto it: adj_lst[x]){
            indegr[it] --;
            if (indegr[it] == 0)
            {
                q.push(it);
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adjm(n+1,vector<int> (n+1));
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }
    cout<<"adjacency matrix of above graph :"<<endl;
    for (int i = 1 ; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++){
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }
    
    if (adjm[3][7] == true)
    {
        cout<<"there is a edge between 3 and 7!"<<endl;
    }
    else {
        cout<<"not a edge between 3 and 7!"<<endl;
    }
    cout<<endl<<endl;
    cin>>n>>m;
    vector<int> adj[N];
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    cout<<"adjacency list og graph is :"<<endl;
    for (int i = 1; i < n+1; i++){
        cout<<i<<"->";
        vector<int>:: iterator it;
        for (it = adj[i].begin();it!= adj[i].end();it++)
        {
            cout<<*it <<" ";
        }
        cout<<endl;        
    } 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool iscycle(int source ,vector<vector<int>> &adj,vector<bool>&visited,vector<int> &stck){
    stck[source] = true;
    if (!visited[source])
    {
        visited[source] = true;
        for (auto i : adj[source])
        {
            if (!visited[i] and iscycle(i,adj,visited,stck))
            {
                return true;
            }
            if (stck[i])
            {
                return true;
            }
            
        }
        
    }
    stck[source] = false;
    return false;
}
    
int main()
{
    int n,m;
    cin>>n>>m;

    int x,y;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
    }
    bool cycle = false;
    vector<bool> visited(n,false);
    vector <int>stck(n,0);
    for(int i = 0;i<n;i++){
        if(!visited[i] and iscycle(i,adj,visited,stck)){
            cycle = true;
        }
    }
    if(cycle)
        cout<<"cycle is present"<<endl;
    else
        cout<<"cycle is not present";


    return 0;
} 
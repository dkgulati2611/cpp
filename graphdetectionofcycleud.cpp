#include <bits/stdc++.h>
using namespace std;
// bool iscycle(int source ,vector<vector<int>> &adj,vector<bool>&visited,int parent){
//     visited[source] = true;
//     for(auto i : adj[source]){
//         if (i != parent){
//             if (visited[i])
//             {
//                 return true;
//             }
//             if (!visited[i] and iscycle(i,adj,visited,source))
//             {
//                 return true;
//             }
            
            
//         }
//     }
//     return false;
// }
// int main()
// {
//     int n,m;
//     cin>>n>>m;

//     int x,y;
//     vector<vector<int>> adj(n);
//     for (int i = 0; i < m; i++)
//     {
//         cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     bool cycle = false;
//     vector<bool> visited(n,false);
//     for(int i = 0;i<n;i++){
//         if(!visited[i] and iscycle(i,adj,visited,-1)){
//             cycle = true;
//         }
//     }
//     if(cycle)
//         cout<<"cycle is present"<<endl;
//     else
//         cout<<"cycle is not present";

//     return 0;
// }


const int N = 1e5+6;
vector<int>parent(N);
vector<int>sz(N);
void makeset(int v){
    parent[v]= v;
    sz[v] = 1;
}
int findset(int v){
    if(v == parent[v]){
        return v;
    }
    return parent[v] = findset(parent[v]);
}
void unionset(int a,int b){
    a = findset(a);
    b= findset(b);
    if (a != b){
        if (sz[a] < sz[b])
            swap(a,b);
        parent[b] = a;
        sz[a] += sz[b];
    }

}
int main(){
    for(int i =0;i<N;i++)
        makeset(i);
    
    int n,m;cin>>n>>m;
    vector<vector<int>> edges;
    for(int i = 0;i<m;i++){
        int u,v;cin>>u>>v;
        edges.push_back({u,v});
    }
    bool cycle = false;
    for(auto i: edges){
        int u = i[0];
        int v = i[1];
        int x = findset(u);
        int y = findset(v);
        if(x == y)
            cycle = true;

        else    
            unionset(u,v);
    }
    if(cycle)
        cout<<"cycle present"<<endl;
    else
        cout<<"cycle not present"<<endl;
    return 0;
}

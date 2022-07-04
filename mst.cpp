#include <bits/stdc++.h>
using namespace std;
vector<int> parent, rnk;
class Edge {
public:
    int u, v, weight;
    bool operator<(Edge const& other) {
        return weight < other.weight;
    }
    Edge(int a, int b, int w) {
	u = a; v = b; weight = w;		
    }
};
void make_set(int v) {
    parent[v] = v;
    rnk[v] = 0;
}
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rnk[a] < rnk[b])
            swap(a, b);
        parent[b] = a;
        if (rnk[a] == rnk[b])
            rnk[a]++;
    }
}
void kruskal(int n, vector<Edge> edges) {
	int cost = 0;
	vector<Edge> result;
	parent.resize(n);
	rnk.resize(n);
	for (int i = 0; i < n; i++)
	    make_set(i);
	
	sort(edges.begin(), edges.end());
	
	for (Edge e : edges) {
	    if (find_set(e.u) != find_set(e.v)) {
	        cost += e.weight;
	        result.push_back(e);
	        union_sets(e.u, e.v);
	    }
	}
	for(auto it : result) {
		cout << "edge: " << it.u << " " << it.v << '\n' << "weight: " << it.weight << '\n';
	}
	cout << "cost: " << cost << endl;
}
int main() {
	int n;
	vector<Edge> edges;
	edges.push_back(Edge(0,1,2));
	edges.push_back(Edge(0,3,6));
	edges.push_back(Edge(1,2,3));
	edges.push_back(Edge(1,3,8));
	edges.push_back(Edge(1,4,5));
	edges.push_back(Edge(2,4,7));
	edges.push_back(Edge(3,4,9));
	kruskal(5, edges);
	return 0;
}
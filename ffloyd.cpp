#include <bits/stdc++.h>

using namespace std;

#define inf INT_MAX

#define n 4

void print(int d[n][n]) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(d[i][j] == inf)
				cout << "INF" << " ";
			else
				cout << d[i][j] << " ";
		}
		cout << '\n';
	}
}

void floyd(int d[n][n]) {
	for(int k=0; k<n; k++) {
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if (d[i][k] < inf && d[k][j] < inf)
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	print(d);
} 

int main() {
	int graph[n][n] = { { 0, 5, inf, 10 },
                        { inf, 0, 3, inf },
                        { inf, inf, 0, 1 },
                        { inf, inf, inf, 0 } };
	floyd(graph);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)

#define vi vector<int>
#define ff first
#define ss second

int citiesDFS(int node, vector<vector<int>>& adj, vector<int>& vis, bool oddVis) {
	vis[node] = 1;
	int count = 0;
	for (int i = 0; i < adj[node].size(); i++) {

		// if (!vis[adj[node][i]] && (oddVis ? adj[node][i] % 2 == 0 : true)) {


		// 	count = max(count, citiesDFS(adj[node][i], adj, vis, oddVis ? true : adj[node][i] % 2 == 1));
		// }
		if (oddVis)
		{
			oddVis = (adj[node][i] % 2 == 0);
		}
		else oddVis = true;

		if (!vis[adj[node][i]] and oddVis)
		{
			count = max(count, citiesDFS(adj[node][i], adj, vis, oddVis ? true : adj[node][i] % 2 == 1));
		}

	}


	vis[node] = 0;
	return count + 1;
}

int numTravelled(vector<int>& T) {
	vector<vector<int>> adj(T.size());
	for (int i = 1; i < T.size(); i++) {
		adj[T[i]].push_back(i);
		adj[i].push_back(T[i]);
	}
	vector<int> vis(T.size(), 0);
	return citiesDFS(0, adj, vis, false);
}

int32_t main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (auto &it : v)
			cin >> it;

		vector<vector<int>> adj(n);
		for (int i = 1; i < n; i++) {
			adj[v[i]].push_back(i);
			adj[i].push_back(v[i]);
		}

		cout << numTravelled(v);

	}


	return 0;
}
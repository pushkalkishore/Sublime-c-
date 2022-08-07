#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)

#define vi vector<int>
#define ff first
#define ss second

int f(int n, int k, vector<int>& v)
{
	for (int i = 0; i < n; i++)
	{
		v[i] = v[i] - k;
	}

	unordered_map<int, int> mp;
	mp[0] = 1; int s = 0; int count = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + v[i];

		if (mp.find(s) != mp.end())
			count += mp[s];

		mp[s] += 1;
	}
	return count;
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
		int n, k;
		cin >> n >> k;
		vector<int> v(n, 0);

		for (auto &it : v)
			cin >> it;

		cout << f(n, k, v) ;
	}


	return 0;
}
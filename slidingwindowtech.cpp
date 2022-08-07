#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)

#define vi vector<int>
#define ff first
#define ss second


int32_t main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	vector<int> v(n);

	for (auto &it : v)
		cin >> it;

	int k, s = 0;
	cin >> k;
	int mine = INT_MAX;

	for (int i = 0; i < k; i++)
	{
		s = s + v[i];
	}

	for (int i = 1; i <= n - k; i++)
	{

		s = s - v[i - 1] + v[i + k - 1];

		mine = min(mine, s);
	}
	cout << "\n" << mine;
	return 0;
}
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

	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ar[n];
		unordered_map<int, int> mp;
		int maxnum = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
			mp[ar[i]]++;
			maxnum = max(maxnum, ar[i]);
		}

		int maxcount = 0, res = 0;

		for (auto it : mp)
		{
			if (it.second == 1)
				res++;

			maxcount = max(maxcount, it.second);
		}

		int ans;
		if (res % 2)
		{
			ans = (res + 1) / 2;
			if (mp[maxnum] == 1)
				if (maxcount == 2)ans++;
		}
		else
			ans = res / 2;

		cout << ans << endl;

	}


	return 0;
}
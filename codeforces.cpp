#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)



int32_t main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (auto &it : v)
		{
			cin >> it;
		}

		unordered_map<int, int> mp;
		int maxi = INT_MIN;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i != j)
				{
					int sum = abs(v[i] - v[j]);
					maxi = max(sum, maxi);
					mp[sum]++;
				}
			}
		}
		cout << mp[maxi] << endl;
	}

	return 0;
}

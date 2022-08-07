#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)


int32_t main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int t;
	cin >> t;
	while (t--)
	{

		int n, m, k;

		cin >> n >> m >> k;

		int arr[n];

		unordered_map<int, int>mp;

		rep(i, 0, n) {

			cin >> arr[i];

			mp[arr[i]]++;

		}

		int lt = 0;

		int f = 0;

		rep(i, 0, k) {

			if (mp[i] == 0 ) {

				f = 1;
			}

			lt += mp[i];
		}

		if ( m >= k and !f and mp[k] <= (n - m)) {

			cout << "YES" << endl;
		}

		else cout << "NO" << endl;

	}

	return 0;
}
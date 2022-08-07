#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)


bool comp(int a, int b)
{
	return a > b;
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
		int ar[n];
		for (int i = 0; i < n; i++)
			cin >> ar[i];

		int s = 0;

		while (k--)
		{
			sort(ar, ar + n, comp);
			s = s + ar[0];
			ar[0] = ar[0] / 2;
		}

		cout << s << endl;

		//kcout << "hello world";
	}
	return 0;
}
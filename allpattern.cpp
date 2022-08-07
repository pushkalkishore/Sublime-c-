#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)


bool printa(int id, vector<int> &ds, int  s, int  sum, int n, int ar[])
{
	if (id == n)
	{


		if (s == sum) {
			for (auto it : ds)
			{
				cout << it << " ";
			} cout << endl;

			return true;

		}


		else return false;
	}

	ds.push_back(ar[id]);
	s += ar[id];

	if (printa(id + 1, ds, s, sum, n, ar) == true)
		return true;


	s -= ar[id];
	ds.pop_back();

	if (printa(id + 1, ds, s, sum, n, ar) == true)
		return true;

	return false;
}

int32_t main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int ar[] = {1, 2, 1};
	int  n = 3;
	int sum = 2;
	int id = 0;
	vector<int> v;

	printa(0, v, 0, sum, n, ar);

	return 0;
}
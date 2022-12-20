#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)


int printa(int id, vector<int> &ds, int  s, int  sum, int n, int ar[])
{
	if (id == n)
	{
		if (s == sum) {
			for (auto it : ds)
			{
				cout << it << " ";
			} cout << endl;

			return 1;

		}
		else
			return 0;
	}

	ds.push_back(ar[id]);
	s += ar[id];

	int l = printa(id + 1, ds, s, sum, n, ar);



	s -= ar[id];
	ds.pop_back();

	int r = printa(id + 1, ds, s, sum, n, ar);


	return l + r;
}

int32_t main()
{



	int ar[] = {1, 2, 1};
	int  n = 3;
	int sum = 2;
	int id = 0;
	vector<int> v;

	cout << printa(0, v, 0, sum, n, ar);

	return 0;
}
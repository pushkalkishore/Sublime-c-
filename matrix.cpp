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


	vector<vector<int> > v;
	v.push_back({1, 2});
	v.push_back({3, 4});

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
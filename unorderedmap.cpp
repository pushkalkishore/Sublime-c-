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


	unordered_map<int, int> mp;
	mp[1] = 23;
	mp[2] = 11;
	mp[6] = 13;
	mp[5] = 12;

	for (auto it : mp)
		cout << it.first << " " << it.second << endl;

	return 0;
}
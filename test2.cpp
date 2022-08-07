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


	unordered_map<int, string> mp;
	// mp.insert({1, "abc"});
	// mp.insert({4, "def"});
	// mp.insert({5, "ghi"});
	// mp.insert({2, "xyz"});
	// mp.insert({7, "sde"});

	mp[1] = "pushkal";

	mp[3] = "jsr";
	mp[2] = "kishore";

	for (auto it : mp)
		cout << it.first << " " << it.second << endl;



	return 0;
}
#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)


void print(multiset<string> s)
{
	for (auto it : s)
	{
		cout << it << endl;
	}
}


int32_t main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int i;
	cin >> i;
	multiset<string> s;
	while (i--)
	{
		string str;
		cin >> str;
		s.insert(str);
	}

	print (s);

	return 0;
}
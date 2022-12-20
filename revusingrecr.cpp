#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)


void f(vector<int> v, int i, vector<int> &ans)
{
	if (i < 0)
		return ;

	ans.push_back(v[i]);
	f(v, i - 1, ans);
}

int32_t main()
{

	vector<int> v = {1, 2, 3, 4, 5};

	vector<int> ans;

	f(v, 4, ans);

	for (auto it : ans)
		cout << it << " ";

	return 0;
}
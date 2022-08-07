#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)

vector<int> dp(1e5, -1);

int  fibo(int n)
{
	if (n == 1 or n == 0)
		return n;

	if (dp[n] != -1)
		return dp[n];

	return dp[n] = fibo(n - 1) + fibo(n - 2);
}


int32_t main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n; cin >> n;
	cout << fibo(n);

	return 0;
}
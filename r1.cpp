#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)

void f(int i)
{
	if (i == 3)
		return ;

	cout << 1 << endl;
	f(++i);
}

int32_t main()
{
	f(0);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

void f(string str, int s, int e)
{
	if (s > e)
	{
		cout << str << endl;
		return ;
	}

	f(str, s + 1, e);
	cout << s << " ";
	if (s < e)
		f(str.substr(s + 1), s + 1, e);

}


int32_t main()
{
	f("abc", 0, 2);
	// string s = "abc";
	// cout << s.substr(1);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;



#define rep(i,a,b) for (int i=a; i<b; i++)


// void print(vector<int> v)
// {
// 	if (v.size() != 0)
// 	{
// 		for (auto it : v)
// 			cout << it << " ";
// 		cout << endl;
// 	}
// }


// void subarray(vector<int> ar, int start, int end)
// {
// 	if (end == ar.size())
// 		return;

// 	else if (start > end)
// 		subarray(ar, 0, end + 1);

// 	else
// 	{
// 		for (int i = start; i <= end; i++)
// 		{
// 			cout << ar[i] << " ";
// 		}
// 		cout << endl;
// 		subarray(ar, start + 1, end);
// 	}
// }




void subarray(vector <int> ar, int n)
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i <= k; i++)
		{
			for (int j = i; j <= k; j++)
			{
				cout << ar[j] << " ";
			}
			cout << endl;
		}
	}
}



int32_t main()
{


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	vector<int> v = {1, 2, 3};

	subarray(v, 3);

	return 0;
}
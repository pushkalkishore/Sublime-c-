#include <bits/stdc++.h>
using namespace std;

#define int long long

#define rep(i,a,b) for (int i=a; i<b; i++)

#define vi vector<int>
#define ff first
#define ss second


int32_t main()
{


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t; cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == 1 and m == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int ans = n + m - 2;
        ans += min(n, m);
        cout << ans << endl;
    }


    return 0;
}
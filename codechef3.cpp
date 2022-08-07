#include <bits/stdc++.h>
using namespace std;

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
        int n;
        cin >> n ;

        int s1 = n;
        int s2 = n - 1;
        vector<int> v1, v2;
        v1.push_back(s1); v2.push_back(s2);

        for (int i = n - 2; i >= 1; i--)
        {
            if (s1 >= s2)
            {
                s2 = s2 + i;
                v2.push_back(i);
            }
            else
            {
                s1 = s1 + i;
                v1.push_back(i);
            }
        }


        int a = v1.size();

        for (auto it : v2)
            cout << it << " ";


        for (int i = a - 1; i >= 0; i--)
        {
            cout << v1[i] << " ";
        }


        cout << endl;

    }


    return 0;
}
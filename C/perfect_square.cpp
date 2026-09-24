#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;







void solve()
{long long n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    vector<vector<char>> b(n, vector<char>(n));
    long long x=n-1;
    for (long long i = 0; i < n; i++)
    { string s;
        cin >> s;
        for (long long j = 0; j < n; j++)
        {
            a[i][j]=s[j];
            b[j][x] = a[i][j];
        }
        x--;
    }

    long long nb=0;
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {if (not(a[i][j] == b[i][j] and a[j][n-1-i]==b[j][n-1-i] and a[n-1-i][n-1-j]==b[n-1-i][n-1-j] and a[n-1-j][i]==b[n-1-j][i] and a[i][j]==a[j][n-1-i] and a[j][n-1-i]==a[n-1-i][n-1-j] and a[n-1-i][n-1-j]==a[n-1-j][i] ))
        {
            vector<int> v(4);
            v[0]=(int)a[i][j];
            v[1]=a[j][n-1-i]; v[2]=a[n-1-i][n-1-j]; v[3]=a[n-1-j][i];
            sort(v.begin(), v.end());
            nb+=(3*v[3]-v[2]-v[1]-v[0]);
        }

        }
    }
    cout << nb/4 << endl;



    }

















int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

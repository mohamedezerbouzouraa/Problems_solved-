#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;







void solve()
{
    long long n, m;
    cin >> n >> m;
    vector<vector<char>> mat(n, vector<char>(m));
    vector<bool>l(n,true);
    vector<bool>c(m,true);
    for (long long i = 0; i < n; i++)
    {long long firstc;
        for (long long j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (l[i]==true)
            {
                if (j==0)
                {
                    firstc=mat[i][0];
                }
                else if (firstc!=mat[i][j])
                {l[i]=false;}
            }

            }
        }
    if ( mat[0][0]==mat[n-1][m-1] or mat[0][m-1]==mat[n-1][0] ){
        cout << "YES" << endl;return;
    }
    if (mat[0][0]==mat[0][m-1] )
    {if (l[n-1]==false or (l[n-1]==true and mat[n-1][0]==mat[0][m-1]))
    {cout << "YES" << endl;return;}
    }


        for (long long i = 0; i < m; i++)
        {long long firstc;
            for (long long j = 0; j < n; j++)
            {
                if (c[i]==true)
                {
                    if (j==0)
                    {
                        firstc=mat[j][i];
                    }
                    else if (firstc!=mat[j][i])
                    {c[i]=false;}
                }

            }
        }
        if (mat[0][0]==mat[n-1][0]  )
        {
            if (c[m-1]==false or (c[m-1]==true and mat[n-1][0]==mat[0][m-1]))
            {
                cout << "YES" << endl;return;
            }
        }
        if (mat[n-1][0]==mat[n-1][m-1])
        {
            if (l[0]==false or (l[0]==true and mat[n-1][0]==mat[0][0]))
            {
                cout << "YES" << endl;return;
            }
        }
    if (mat[0][m-1]==mat[n-1][m-1])
    {
        if (c[0]==false or (c[0]==true and mat[0][m-1]==mat[0][0]))
        {
            cout << "YES" << endl;return;
        }
    }

cout << "NO" << endl;
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

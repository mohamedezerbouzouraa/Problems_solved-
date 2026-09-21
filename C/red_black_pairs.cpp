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
    vector<vector<char>> a(2, vector<char>(n));
    for (long long i = 0; i < 2; i++)
    {
        string s; cin >> s;
        for (long long j = 0; j < n; j++)
        {
            a[i][j]=s[j];
        }

    }
    long long nbcouples=0;
    long long i=0;
    while (i<n)
    {
        if (a[0][i]==a[1][i])
        {
            nbcouples++;
            i++;
        }
        else if (i<n-1 )
        {long long k=nbcouples;
            if (a[0][i]==a[0][i+1]){nbcouples++;}
            if (a[1][i]==a[1][i+1]){nbcouples++;}
            if (nbcouples==k){i++;}
            else{i+=2;}

        }
        else
        {
            if (a[0][i]==a[1][i]){nbcouples++;}
            i++;
        }
    }
    cout << n-nbcouples << endl;

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

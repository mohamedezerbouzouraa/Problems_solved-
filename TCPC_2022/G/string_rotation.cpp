#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

void solve()
{
    long long n,x;
    cin>>n>>x;
    string s,t;
    cin>>s;
    cin>>t;
    rotate(s.begin(), s.begin() + (n-x%n), s.end());
    long long nb=0;
    for (long long i = 0; i < n; i++)
    {
        if (s[i]!=t[i])
        {nb++;

        }
    }
    cout<<nb<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

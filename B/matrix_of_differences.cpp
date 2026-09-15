#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;



void solve()
{
    long long n;
    cin >> n;
vector<long long> a(n*n);
    long long t1=1,t2=n*n;
    long long dep=0;
    while (dep<n*n)
    {if (dep%2==1)
    {
        a[dep]=t1;
        t1++;
    }
        else
        {
            a[dep]=t2;
            t2--;
        }

        dep++;
    }
    long long t;
    long long x=0;
    for (long long i=1;i<=n;i++)
    {if (i%2==1)
    {for (t=x;t<x+n;t++)
    {cout << a[t] << " ";}
        x=x+n;
        cout << endl;
    }
        else{for (t=x+n-1;t>=x;t--)
        {
            cout << a[t] << " ";
        }
        x=x+n;
        cout << endl;}



    }
    cout << endl;



    }










int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

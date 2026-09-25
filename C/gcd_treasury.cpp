#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>


#include <cmath>
using namespace std;






void solve()
{
    long long n,x;
    cin >> n >> x;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}

    vector<long long> divisors;
    for (long long i = 2; i*i <= x; i++)
    {
        if (x % i == 0)
        {
            divisors.push_back(i);
            if (i != x/i) divisors.push_back(x/i);
        }
    }
    if (x != 1) divisors.push_back(x);  

    long long best = 0;
    for (long long d : divisors)
    {
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] % d == 0) sum += a[i];
        }
        best = max(best, sum);
    }

    cout << best << endl;
}

















int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t ;
    cin >> t;
    while(t!=0)
    {
        solve();
        t--;
    }
    }


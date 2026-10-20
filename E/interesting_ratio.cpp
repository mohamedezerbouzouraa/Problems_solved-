#include <bits/stdc++.h>
using namespace std;
vector<long long> primes;
 
void solve()
{
    long long n;
    cin >> n;
 
    long long ans = 0;
    for (auto prime : primes)
    {
        if (prime <= n)
        {
            ans += (n / prime);
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}
 
int main()
{
    long long x = 10000000;
    vector<char> comp(x + 1, 0);
 
    for (long long i = 2; i <= x; i++)
    {
        if (!comp[i])
        {
            primes.push_back(i);
            for (long long j = i * i; j <= x; j += i)
            {
                comp[j] = 1;
            }
        }
    }
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}

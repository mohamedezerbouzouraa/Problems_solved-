#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

bool isprime(long long n)
{
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
    return true;
}

void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const long long LIMIT = 1000000000000000000LL;
    long long x = 2;
    while (x <= LIMIT)
    {
        if (isprime(x))
        {
            for (long long i = 0; i < n; i++)
            {if (gcd(x, a[i]) == 1)
                {cout << x << "\n";
                    return;}}}
        if (x == 2) x++;
        else x += 2;
    }

    cout << -1 << "\n";
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

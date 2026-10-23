#include <bits/stdc++.h>
using namespace std;
vector<long long> primes;
bool is_prime(long long n) {
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
long long ppcm(long long t1,long long t2)
{
    return (t1*t2)/gcd(t1,t2);
}
 
void solve()
{  long long n;
    cin >> n;
    vector<long long> a(n+1);
    vector<long long> last_modif(n+1,0);
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i>1)
        {
            if (a[i]!=a[i-1])
            {
                last_modif[i] = i;
            }
            else
            {
                last_modif[i] = last_modif[i-1];
            }
        }
    }
   long long q;
    cin >> q;
    vector<pair<long long,long long>> qs(q);
    vector<pair<long long,long long>>res;
    for (long long i = 0; i < q; i++)
    {
        cin >> qs[i].first >> qs[i].second;
        if (last_modif[qs[i].first] != last_modif[qs[i].second])
        {
            res.push_back({last_modif[qs[i].second]-1,last_modif[qs[i].second]});
        }
        else
        {
            res.push_back({-1,-1});
        }
    }
    for (long long i = 0; i < res.size(); i++)
    {
        cout << res[i].first << " " << res[i].second << endl;
    }
    cout << endl;
 
 
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}

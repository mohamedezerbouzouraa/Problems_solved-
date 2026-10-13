#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
bool isPrime(long long n)
{
    if (n < 2) return false;
    if (n < 4) return true; // 2 and 3
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
long long g(long long x,long long k)
{
    if (x==0)return 0;
    if (x==1)return 0;
    if (x<=k)
    {
        return 1;
    }
    if (x%k==0)
    {
        if (x/k<=k) return 1 +x/k;
        return 1+(k-1)+g(x-k*(k-1),k);
    }
    else
    {
       long long p=x/k;
        if (p<=k-1)
        {
            if (x%k==1)return 1+p;
            else
            {long long l5reni=x%k-(k-1-p);
                return 1+p+(l5reni>1?1:0);
            }
        }
        else
        {return 1+(k-1)+g(x-k*(k-1),k);
 
        }
    }
}
 
 
 
void solve()
{
    long long n,k;
    cin >> n >> k;
    cout << g(n,k)<<endl;
 
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

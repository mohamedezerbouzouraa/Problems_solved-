#include <bits/stdc++.h>
using namespace std;
bool isprime(long long n)
{
    if (n < 2) return false;
    if (n < 4) return true;           // 2 and 3
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}
 
void solve()
{
    long long n;
    cin >> n;
    if (n==2){cout<<-1<<endl;return;}
    if ( n==3){cout<<-1<<endl;return;}
    long long a=n-2,b=2;
    while (b<a and not(isprime(a) and isprime(b)))
    {
        if (b==2)
        {
            a=n-3;
            b=3;
        }
        else
        {
            b+=2;
            a-=2;
        }
    }
    if (b>a){cout<<-1<<endl;return;}
    cout<<a<<" "<<b<<endl;
 
 
 
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}

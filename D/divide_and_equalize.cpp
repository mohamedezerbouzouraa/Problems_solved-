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
 
void solve()
{  long long n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> mp;
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        long long x=1,y=2,t=a[i];
        while (t>1 and y*y<=t)
        {
 
                while (t%y==0)
                {if (mp.find(y)==mp.end())
                {
                    mp[y]=1;
                }
                    else{mp[y]++;}
                    t/=y;
 
                }
                if (y==2){y=3;}
                else{y+=2;}
 
        }
        if (t>1){mp[t]++;}
 
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second%n !=0){cout<<"NO"<<endl;return;}
 
    }
    cout<<"YES"<<endl;
 
 
 
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}

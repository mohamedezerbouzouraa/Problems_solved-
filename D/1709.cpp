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
    vector<long long> b(n);
    vector<vector<long long >> c(0,vector<long long >(2));
    for (long long i = 0; i < n; i++) cin >> a[i];
    for (long long i = 0; i < n; i++) cin >> b[i];
    bool x1=true,x2=true;
    long long t1=0;
    while (x1==true)
    {x1=false;
        for (long long i = 0; i < n-1-t1; i++)
    { if (a[i]>a[i+1])
    {
        x1=true;
        long long y=a[i];
        a[i]=a[i+1];
        a[i+1]=y;
        c.push_back({1,i+1});
    }
 
    }
        t1++;
        if (x1==false){break;}
 
    }
    x1=true;
    t1=0;
    while (x1==true)
    {x1=false;
        for (long long i = 0; i < n-1-t1; i++)
        { if (b[i]>b[i+1])
        {
            x1=true;
            long long y=b[i];
            b[i]=b[i+1];
            b[i+1]=y;
            c.push_back({2,i+1});
        }
 
        }
        t1++;
        if (x1==false){break;}
 
    }
    for (long long i = 0; i < n; i++)
    {
        if (a[i]>b[i])
        {
            c.push_back({3,i+1});
        }
    }
    cout << c.size() << endl;
    for (long long i = 0; i < c.size(); i++)
    {
        cout<<c[i][0]<<" "<<c[i][1]<<endl;
    }
 
 
 
}
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}

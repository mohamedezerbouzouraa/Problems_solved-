#include <bits/stdc++.h>
using namespace std;
 
const long long M = 1000000007;
 
long long f(long long k,long long q)
{
    long long i=1,s=0;
    while (i<=q and s<q)
    { s=s+(i*(k/i));
        i++;
 
    }
    return s;
}
 
void solve()
{
    long long n;
    cin>>n;
    long long k=n;
    while (f(k,n)>=n)
    {
        k--;
    }
    vector<long long> a;
    long long K = k+1, numsac = 1;
    for (long long h = K; h >= 1 && (long long)a.size() < n; h--) {
        for (long long j = 0; j < K / h && (long long)a.size() < n; j++) {
            for (long long i = 0; i < h && (long long)a.size() < n; i++)
                a.push_back(numsac);
            numsac++;
        }
    }
    cout<<k+1<<endl;
    for (long long i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

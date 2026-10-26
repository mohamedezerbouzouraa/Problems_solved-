#include <bits/stdc++.h>
using namespace std;
int bitLength(long long x) {
    int len=0;
    while(x>0){len++;
        x >>= 1;}
    return len;
}
void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    long long nbbitstot=0;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        nbbitstot+=(__builtin_popcountll(a[i]));
    }
    long long max=*max_element(a.begin(),a.end());
    long long p=bitLength(max);
    vector<long long> t(p,0);
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<p;j++)
        {
            if (((a[i]>>j)&1 )==0)
            {
                t[j]++;
            }
        }
    }
    for(long long i=0;i<p;i++)
    {long long f=1LL<<i;
        nbbitstot+=min(t[i],k/f);
     k-=(min(t[i]*f,k/f *f));
        if(k<=0)
        {
            break;
        }
    }
    long long f=1LL<<p;
    while (k>=f)
    {nbbitstot+=min(n,k/f);
        k-=(min(n*f,k/f * f));
        f*=2;
    }
    cout<<nbbitstot<<endl;




}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
}

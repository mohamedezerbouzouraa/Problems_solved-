#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   long long n,x;
    cin>>n>>x;
    vector<long long> a(n);
    for(long long i=0;i<n;i++)cin>>a[i];
    vector<long long> b(n);
    iota(b.begin(),b.end(),0);
    sort(b.begin(),b.end(),[&](long long i,long long j){return a[i]<a[j];});
    vector<long long> c;
    long long score=0,sn=0,l=n-1,k=1;
    for(long long i=0;i<=l;)
    { if (sn+a[b[i]]<k*x)
    {
        sn+=a[b[i]];
        c.push_back(a[b[i]]);
        i++;
    }
        else
        {
            score+=a[b[l]];
            sn+=a[b[l]];
 
            c.push_back(a[b[l]]);
            l--;
            k++;
        }
 
    }
    cout<<score<<endl;
    for(long long i=0;i<c.size();i++)
    {
        cout<<c[i]<<" ";
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

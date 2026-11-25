//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
const int N=200002;
int spf[N+1];
 
void solve() {
    long long n;
    cin>>n;
    vector<long long> a(n);
    long long nbp=0,nbi=0;
    bool p0=false,p1=false;
    map<long long,long long> mp;
    vector<long long> v;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        nbp+=(a[i]%2==0);
        nbi+=(a[i]%2==1);
        if (!p0){
 
            if (a[i]%2==1)
            {v.push_back(a[i]);
            }
            long long x=a[i];
            while (x>1)
            {
                long long y=spf[x];
                if (mp.find(y)!=mp.end())
                {
                    p0=true;
                }
                else
                {
                    mp[y]=1;
                }
                while (x%y==0)
                {
                    x/=y;
                }
            }
 
 
        }
    }
    vector<long long> b(n);
    for(long long i=0;i<n;i++)cin>>b[i];
    if (p0){cout<<0<<endl;return;}
    if (nbp==1 and nbi>0){cout<<1<<endl;return;}
    long long p=false;
    for (long long i=0;i<v.size();i++)
    {
        long long t=v[i]+1;
        while (t>1)
        {
            long long y=spf[t];
            if (mp.find(y)!=mp.end())
            {
                p1=true;p=true;break;
            }
 
            while (t%y==0)
            {
                t/=y;
            }
        }
        if (p)break;
 
    }
    if (p){cout<<1<<endl;return;}
    cout<<2<<endl;
 
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=2;i<=N;i++)
    {
        if(!spf[i])
        {
            for(int j=i;j<=N;j+=i)
            {
                if(!spf[j]) spf[j]=i;
            }
        }
    }
    long long t;
    cin>>t;
    while(t--){solve();
    }
 
}

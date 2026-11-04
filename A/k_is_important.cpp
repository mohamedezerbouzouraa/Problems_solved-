#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n+1);
    a[0]=0;
    long long ans=0;
    for(long long i=1;i<n+1;i++){cin>>a[i];}
    if (k<=n-k+1)
    {
        for (long long i=k;i<=n-k+1;i++)
        {ans+=a[i];
 
        }
        long long p1=k-1,p2=n-k+2;
        while (p1>0)
        {
            ans+=max(a[p1],a[p2]);
            p1--;
            p2++;
        }
        cout<<ans+a[0]<<endl;
    }
    else
    {
        long long px=n-k+1,py=k,d=1;
        while(px>0)
        {
            ans+=max(a[px],a[py]);
            px--;
            py++;
        }
        cout<<ans+a[0]<<endl;return;
 
 
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){    solve();
}
 
}

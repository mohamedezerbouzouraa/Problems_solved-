#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> b(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    for(long long i=0;i<n;i++){cin>>b[i];}
    vector<long long> non_croise(n);
    vector<long long> croise(n,0);
    for(long long i=1;i<n;i++)
    { long long x,y;
        if (a[i-1]==b[i-1]){x=2;}
        else{x=1;}
        if (b[i-1]==a[i]){y=2;}
        else{y=1;}
        non_croise[i]=non_croise[i-1]+y+x;
    }
    for(long long i=n-2;i>=0;i--)
    {
        long long x,y;
        if (a[i+1]==b[i]){x=2;}
        else{x=1;}
        if (b[i+1]==a[i]){y=2;}
        else{y=1;}
        croise[i]=croise[i+1]+y+x;
    }
    long long mx=0;
    long long t;
    if (a[n-1]==b[n-1]){t=2;}
    else{t=1;}
    for (long long i=0;i<n;i++)
    {mx=max(mx,croise[i]+non_croise[i]+t);}
    cout<<mx<<endl;
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

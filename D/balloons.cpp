#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   long long n;
    cin>>n;
    vector<long long> a(n);
    long long x=0;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]>0){x++;}
    }
    cout<<x<<endl;
 
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

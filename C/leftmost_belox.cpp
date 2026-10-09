#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
    long long n;
    cin>>n;
    vector<long long> pref(n,0);
    vector<long long> b(n);
    for(long long i=0;i<n;i++)
    { cin >>b[i];
        if(i==0)
    {
        pref[0]=b[0];
    }
        else
        {
            pref[i]=min(b[i],pref[i-1]);
        }
    }
    for(long long i=0;i<n;i++)
    {
        if (i>0 and b[i]>=2*pref[i-1]){cout<<"NO"<<endl;return;}
    }
    cout<<"YES"<<endl;
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

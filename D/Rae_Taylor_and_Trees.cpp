//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    long long n;
    cin>>n;
    vector<long long> a(n+1);
    vector<long long> min_pref(n+1),max_suff(n+1);
    long long mn=LLONG_MAX;
    for(long long i=1;i<=n;i++)
    {cin>>a[i];
        if (i==1){mn=min(mn,a[i]);min_pref[i]=mn;}
        else
        {
            mn=min(mn,a[i]);
            min_pref[i]=mn;
        }
    }
    long long mx=0;
    for(long long i=n;i>=1;i--)
    {
        mx=max(mx,a[i]);
        max_suff[i]=mx;
    }
    bool flag=false;
    for(long long i=1;i<=n-1;i++)
    {
        if (min_pref[i]>max_suff[i+1])
        {
            flag=true;break;
        }
    }
    cout<<((flag==true)?"NO":"YES")<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long t;
    cin>>t;
    while(t--){solve();
    }
 
}

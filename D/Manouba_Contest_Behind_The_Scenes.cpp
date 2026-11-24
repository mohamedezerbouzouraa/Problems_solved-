//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long M=(1LL<<62);
 
void solve() {
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long l=0,r=1,ans=0;
    map<long long,long long> mp;
    mp[a[0]]=1;
    while (r<n)
    {
        if (!(l<r))
        {mp[a[l]]=1;
            r=l+1;
        }
        while (r<n and mp[a[r]]<1)
        {
            mp[a[r]]++;
            r++;
        }
        ans=max(ans,r-l);
        if (r==n)break;
        while (l<n and a[l]!=a[r])
        {
            mp[a[l]]--;
            l++;
        }
        if (l<n){mp[a[l]]--;}
        l++;
    }
    cout<<max(ans,r-l)<<endl;
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
 
}

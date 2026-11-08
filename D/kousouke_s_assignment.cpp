//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    vector<long long> pref(n+1);
    pref[0]=0;
    for (long long int i=0;i<a.size();i++)
    {
        cin>>a[i];
        if (i==0){pref[1]=a[0];}
        else{pref[i+1]=a[i]+pref[i];}
    }
    vector<long long> x(n+1);
    iota(x.begin(),x.end(),0);
    sort(x.begin(),x.end(),[&](long long int i,long long int j)
    {
        if (pref[i] != pref[j]) return pref[i] > pref[j];
        return i < j;});
    vector<pair<long long,long long>> start_length;
    for (long long i=0;i<x.size()-1;i++)
    {
        if (pref[x[i]]==pref[x[i+1]])
        {start_length.push_back({x[i+1],x[i+1]-x[i]});}}
    sort(start_length.begin(), start_length.end(), [](const pair<long long,long long>& p, const pair<long long,long long>& q){
        if(p.first != q.first) return p.first < q.first;
        return p.second < q.second;
    });
 
    vector<long long> dp(n+1);
    dp[0]=0;
    for (long long  i=1;i<=n;i++)
    {dp[i]=dp[i-1];
        auto it=lower_bound(start_length.begin(),start_length.end(),make_pair(i,(long long)LLONG_MIN));
        if (it!=start_length.end() && it->first ==i)
        {
            dp[i]=max(dp[i-1],dp[i-it->second]+1);
        }
    }
 
    cout<<dp[n]<<endl;
    }
 
 
 
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
}

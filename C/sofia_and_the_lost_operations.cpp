//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    vector<long long> b(n);
    map<long long,bool> mp;
    map<long long,long long> s;
    for(long long i=0;i<n;i++)
    {
        cin>>b[i];mp[b[i]]=true;
        if (b[i]!=a[i])
        {
            s[b[i]]++;}
    }
 
    long long m;
    cin>>m;
    vector<long long> d(m);
    for(long long i=0;i<m;i++)
    {
        cin>>d[i];
        auto it=s.find(d[i]);
        if (it!=s.end())
        {it->second--;
            if (it->second==0) s.erase(it);
        }
    }
    if (!mp.count(d[m-1])or !(s.empty())){cout<<"NO"<<endl;return;}
    cout<<"YES"<<endl;
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

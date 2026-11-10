//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long nb_uns(long long x){
    long long c=0;
    while(x>0){c+=x&1;x>>=1;}
    return c;}
 
void solve(){
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    for(long long i=0;i<n;i++){cin>>a[i];}
    sort(a.begin(),a.end());
    map<long long,long long> mp;
    for(long long i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    vector<pair<long long,long long>> x;
    n=0;
    for(auto it:mp){x.push_back({it.first,it.second});n++;}
    long long l=0,r=1,used=1;
    long long best=0,v=x[0].second;
    while(l<n)
    {
        while(used<k and r<n and x[r].first-x[r-1].first==1)
    {v+=x[r].second;
        r++;
            used++;
    }
        best=max(best,v);
        if (used==k)
        {v-=x[l].second;
            used--;
            l++;
        }
        else
        {
            l=r;r++;
            used=1;
            v=(l<n? x[l].second : 0);
        }
 
 
    }
    cout<<best<<endl;
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

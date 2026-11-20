//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n);
    set<long long> s;
    set<long long>sf;
    vector<long long> f;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    sort(a.begin(),a.end());
    for(long long i=0;i<n;i++)
    {
        sf.insert(a[i]);
        if (s.find(a[i]) == s.end())
        {
            f.push_back(a[i]);
            long long x=a[i];
            while (x<=k){s.insert(x);x+=a[i];}
        }
    }
 
 
long long h=(long long)(s.size());
    if (h>n or !(sf==s)){cout<<-1<<endl;return;}
    cout<<f.size()<<endl;
    for(long long i=0;i<f.size();i++){cout<<f[i]<<" ";}
    cout<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) { solve(); }
}

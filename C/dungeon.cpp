//All thanks to Allah for His countless blessings.
//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
long long M=(1LL<<62);
 
void solve() {
    long long n,m;
    cin>>n>>m;
    priority_queue<long long> a;
    priority_queue<long long,vector<long long>,greater<long long> > p;
    vector<long long> rest;
    long long max_a=0;
    for(long long i=0;i<n;i++)
    {long long x;
        cin>>x;
        max_a=max(max_a,x);
        p.push(x);
    }
    vector<long long> b(m);
    for(long long i=0;i<m;i++)
    {cin>>b[i];
 
    }
    vector<long long> c(m);
    priority_queue<long long> kx;
    priority_queue<pair<long long,long long>,
               vector<pair<long long,long long>>,
               greater<pair<long long,long long>>> t;
    long long ans=0;
    for(long long i=0;i<m;i++)
    {cin>>c[i];
        if (c[i]>0)
        {t.push({b[i],c[i]});
            
 
        }
        else
        {
            kx.push(b[i]);
            
        }
    }
    
    while (!t.empty())
    {
        long long bb=t.top().first;
        long long cc=t.top().second;
        t.pop();
        while (!p.empty() and p.top()<bb)
        {
            rest.push_back(p.top());
            p.pop();
            
        }
        if (p.empty()){break;}
        
        long long x=p.top();
        p.pop();
        p.push(max(x,cc));
        ans++;
    }
    while (!p.empty()){a.push(p.top());p.pop();}
    for (long long x:rest){a.push(x);}
 
    if (kx.empty())
    {
        cout<<ans<<endl;return;
    }
    while (!a.empty() and !kx.empty())
    {
        if (a.top()>=kx.top())
        {
            ans++;a.pop();kx.pop();
        }
        else kx.pop();
    }
 
    
    cout<<ans<<endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){solve();
    }
 
}

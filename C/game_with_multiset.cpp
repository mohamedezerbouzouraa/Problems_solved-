//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long m;
    cin>>m;
    map<long long, long long, greater<long long>> mp;
    while(m--)
    {
        long long x,y;
        cin>>x>>y;
        if (x==1)
        { mp[y]++;
 
        }
        else
        {long long r=63- __builtin_clzll(y);
            auto k=mp.end();
            for (auto it=mp.begin();it!=mp.end();++it)
            {
                if (it->first<=r){k=it;break;}
            }
            for (k;k!=mp.end();++k)
            {
                y-=((1LL<<(k->first)) * min(k->second,y/(1LL<<(k->first))));
            }
            if (y==0){cout<<"YES"<<"\n";}
            else{cout<<"NO"<<"\n";}
 
 
        }
    }
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     solve();
}

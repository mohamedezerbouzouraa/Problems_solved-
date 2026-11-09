//The more the buzzing,the less the dazzling.
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n,x,y;
    cin>>n>>x>>y;
    vector<long long> a(n);
    map<long long,map<long long,long long>> mp;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if (mp.find(a[i]%y)==mp.end())
        {
            mp[a[i]%y][a[i]%x]=1;
        }
        else
        {
            if (mp[a[i]%y].find(a[i]%x)==mp[a[i]%y].end())
            {
                mp[a[i]%y][a[i]%x]=1;
            }
            else
            {
                mp[a[i]%y][a[i]%x]++;
            }
        }
    }
    long long ans=0;
    for (auto i : mp)
    {long long d=i.second[0];
        ans+=(d*(d-1)/2);
            for (auto h : i.second)
            {  long long p=h.first,c=h.second;
                if (p < (x-p)%x and p!=0 and 2*p!=x and i.second.find((x-p)%x)!=i.second.end())
                {
                    ans+=(i.second[p] * i.second[x-p]);
                }
                else if (2*p==x)
                {ans+=(c*(c-1))/2;
 
                }
                if (p>=(x-p)){break;}
            }
 
 
    }
    cout<<ans<<endl;
 
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

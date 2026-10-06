#include <bits/stdc++.h>
using namespace std;
 
 
void solve()
{
   long long n;
    cin>>n;
    vector<long long> a(n);
    map<long long, vector<long long>> mp;      
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]].push_back(i);             
    }
    long long t=0;
    vector<long long> b(n,0);
    long long k=1;
    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        t+=(it->second.size());
        if ((it->second.size())%(it->first) !=0){cout<<-1<<endl;return;}
        else
        {
            long long x=it->second.size();
            long long j=0;                    
            while (x>0)
            {b[it->second[j]]=k;            
                j++;
                x--;
                
                if (x%(it->first) ==0)
                {
                    k++;}}
        }
    }
    for(long long i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
 
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

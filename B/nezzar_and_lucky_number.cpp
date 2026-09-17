#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;
 
void solve()
{
    long long q,d;
    cin >> q>>d;
    vector<pair<long long,long long>> s;
    for (long long i=1;i<q;i++)
    { s.push_back({(d*i)%10,d*i}); }
    sort(s.begin(),s.end(),[&](const pair<long long,long long>& i,const pair<long long,long long>& j){return i.first<j.first;});
    vector<long long> a(q);
    for (long long i = 0; i < q; i++)
    {
        cin >> a[i];}
    for (long long i = 0; i < q; i++)
    {   if (a[i]>=10*d ){cout<<"YES"<<endl;}
        else
        { if (d==3 or d==7 or d==9 )
        { long long x=a[i]%10;
            long long h=0;
            while (h<(long long)s.size() )
            {if (x==s[h].first and a[i]>=s[h].second){cout<<"YES"<<endl; break;}
                h++;
            }
            if (h==(long long)s.size() ){cout<<"NO"<<endl;}
        }
            else
            { long long x=a[i]%10;
                long long h=0;
                while (h<(long long)s.size() )
                {if (x==s[h].first and (a[i]>=s[h].second or (x==0 and a[i]%d==0))){cout<<"YES"<<endl; break;}
                    h++;
                }
                if (h==(long long)s.size() ){cout<<"NO"<<endl;}
 
 
 
            }}
    }
 
 
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--)
    {
        solve();
    }
 
    return 0;
}
